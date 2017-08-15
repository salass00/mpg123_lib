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

#include <libraries/mpg123.h>

#include <interfaces/mpg123.h>
#include <proto/exec.h>
#include <assert.h>

/****************************************************************************/

struct Mpg123Base * Mpg123Base = NULL;
static struct Mpg123Base * __Mpg123Base;

/****************************************************************************/

void _INIT_5_Mpg123Base(void)
{
    if (Mpg123Base != NULL)
    {
        return; /* Someone was quicker, e.g. an interface constructor */
    }
    __Mpg123Base = Mpg123Base = (struct Mpg123Base *)IExec->OpenLibrary("mpg123.library", 53L);
    assert(Mpg123Base != NULL);
}
__attribute__((section(".ctors.zzzz"))) static void
(*mpg123_base_constructor_ptr)(void) USED = _INIT_5_Mpg123Base;

/****************************************************************************/

void _EXIT_5_Mpg123Base(void)
{
    if (__Mpg123Base)
    {
        IExec->CloseLibrary((struct Library *)__Mpg123Base);
    }
}
__attribute__((section(".dtors.zzzz"))) static void
(*mpg123_base_destructor_ptr)(void) USED = _EXIT_5_Mpg123Base;

/****************************************************************************/

