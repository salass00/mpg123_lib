/*
 * AmigaOS shared library implementation of libmpg123.
 *
 * Copyright (C) 2011-2017 Fredrik Wikstrom <fredrik@a500.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <dos/dos.h>
#include <proto/exec.h>
#include <interfaces/mpg123.h>
#include "mpg123.library_rev.h"

STATIC CONST UBYTE USED verstag[] = VERSTAG;

struct Mpg123Base {
	struct Library libNode;
	BPTR segList;
	/* If you need more data fields, add them here */
};

struct ExecIFace *IExec;
struct Library *NewlibBase;
struct Interface *INewlib;

int32 _start(void) {
	/* If you feel like it, open DOS and print something to the user */
	return RETURN_FAIL;
}

/* Open the library */
STATIC struct Library *libOpen(struct LibraryManagerInterface *Self, ULONG version) {
	struct Library *libBase = Self->Data.LibBase; 

	if (version > VERSION) {
		return NULL;
	}

	/* Add any specific open code here 
	   Return 0 before incrementing OpenCnt to fail opening */

	/* Add up the open count */
	libBase->lib_OpenCnt++;
	return libBase;
}


/* Close the library */
STATIC BPTR libClose(struct LibraryManagerInterface *Self) {
	struct Library *libBase = Self->Data.LibBase;

	/* Make sure to undo what open did */

	/* Make the close count */
	libBase->lib_OpenCnt--;

	return ZERO;
}


/* Expunge the library */
STATIC BPTR libExpunge(struct LibraryManagerInterface *Self) {
	struct Mpg123Base *libBase = (struct Mpg123Base *)Self->Data.LibBase;
	BPTR result;
	if (libBase->libNode.lib_OpenCnt == 0) {
		result = libBase->segList;

		/* Undo what the init code did */
		mpg123_exit();

		IExec->DropInterface(INewlib);
		IExec->CloseLibrary(NewlibBase);

		IExec->Remove((struct Node *)libBase);
		IExec->DeleteLibrary((struct Library *)libBase);
	} else {
		/* If your library cannot be expunged, return ZERO */
		result = ZERO;
		libBase->libNode.lib_Flags |= LIBF_DELEXP;
	}
	return result;
}

/* The ROMTAG Init Function */
STATIC struct Mpg123Base *libInit(struct Mpg123Base *libBase, BPTR seglist, struct ExecIFace *exec) {
	libBase->libNode.lib_Node.ln_Type = NT_LIBRARY;
	libBase->libNode.lib_Node.ln_Pri  = 0;
	libBase->libNode.lib_Node.ln_Name = (STRPTR)"mpg123.library";
	libBase->libNode.lib_Flags        = LIBF_SUMUSED|LIBF_CHANGED;
	libBase->libNode.lib_Version      = VERSION;
	libBase->libNode.lib_Revision     = REVISION;
	libBase->libNode.lib_IdString     = (STRPTR)VSTRING;

	libBase->segList = seglist;
	IExec = exec;

	NewlibBase = IExec->OpenLibrary("newlib.library", 52);
	INewlib = IExec->GetInterface(NewlibBase, "main", 1, NULL);
	if (!INewlib) {
		IExec->Alert(AG_OpenLib|AO_NewlibLib);
		goto error;
	}

	if (mpg123_init() != MPG123_OK)
		goto error;

	return libBase;

error:
	IExec->DropInterface(INewlib);
	IExec->CloseLibrary(NewlibBase);

	IExec->DeleteLibrary((struct Library *)libBase);
	return NULL;
}

/* ------------------- Manager Interface ------------------------ */
/* These are generic. Replace if you need more fancy stuff */
STATIC uint32 _manager_Obtain(struct LibraryManagerInterface *Self) {
	uint32 res;
	__asm__ __volatile__(
	"1:	lwarx	%0,0,%1\n"
	"addic	%0,%0,1\n"
	"stwcx.	%0,0,%1\n"
	"bne-	1b"
	: "=&r" (res)
	: "r" (&Self->Data.RefCount)
	: "cc", "memory");

	return res;
}

STATIC uint32 _manager_Release(struct LibraryManagerInterface *Self) {
	uint32 res;
	__asm__ __volatile__(
	"1:	lwarx	%0,0,%1\n"
	"addic	%0,%0,-1\n"
	"stwcx.	%0,0,%1\n"
	"bne-	1b"
	: "=&r" (res)
	: "r" (&Self->Data.RefCount)
	: "cc", "memory");

	return res;
}

/* Manager interface vectors */
STATIC CONST APTR lib_manager_vectors[] = {
	_manager_Obtain,
	_manager_Release,
	NULL,
	NULL,
	libOpen,
	libClose,
	libExpunge,
	NULL,
	(APTR)-1
};

//* "__library" interface tag list */
STATIC CONST struct TagItem lib_managerTags[] = {
	{ MIT_Name,        (Tag)"__library"         },
	{ MIT_VectorTable, (Tag)lib_manager_vectors },
	{ MIT_Version,     1                        },
	{ TAG_DONE,        0                        }
};

/* ------------------- Library Interface(s) ------------------------ */

#include "mpg123_vectors.c"

/* Uncomment this line (and see below) if your library has a 68k jump table */
/* extern APTR VecTable68K[]; */

STATIC CONST struct TagItem main_v1_Tags[] = {
	{ MIT_Name,        (Tag)"main"          },
	{ MIT_VectorTable, (Tag)main_v1_vectors },
	{ MIT_Version,     1                    },
	{ TAG_DONE,        0                    }
};

STATIC CONST CONST_APTR libInterfaces[] = {
	lib_managerTags,
	main_v1_Tags,
	NULL
};

STATIC CONST struct TagItem libCreateTags[] = {
	{ CLT_DataSize,   sizeof(struct Mpg123Base) },
	{ CLT_InitFunc,   (Tag)libInit              },
	{ CLT_Interfaces, (Tag)libInterfaces        },
	/* Uncomment the following line if you have a 68k jump table */
	/* { CLT_Vector68K,  (Tag)VecTable68K          }, */
	{ TAG_DONE,       0                         }
};


/* ------------------- ROM Tag ------------------------ */
STATIC CONST struct Resident USED lib_res = {
	RTC_MATCHWORD,
	(struct Resident *)&lib_res,
	(APTR)(&lib_res + 1),
	RTF_NATIVE|RTF_AUTOINIT, /* Add RTF_COLDSTART if you want to be resident */
	VERSION,
	NT_LIBRARY, /* Make this NT_DEVICE if needed */
	0, /* PRI, usually not needed unless you're resident */
	"mpg123.library",
	VSTRING,
	(APTR)libCreateTags
};

