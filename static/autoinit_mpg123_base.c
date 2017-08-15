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

