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

int32 _start(STRPTR argstring, int32 arglen, struct ExecBase *sysbase) {
	struct ExecIFace *iexec = (struct ExecIFace *)sysbase->MainInterface;
	uint32 vector_unit = VECTORTYPE_NONE;

	iexec->GetCPUInfoTags(GCIT_VectorUnit, &vector_unit, TAG_END);

	if (vector_unit == VECTORTYPE_ALTIVEC)
		return RETURN_OK;

	return RETURN_WARN;
}

