#include <libraries/mpg123.h>

#include <interfaces/mpg123.h>
#include <proto/exec.h>
#include <assert.h>

struct Mpg123IFace * IMpg123 = NULL;
static struct Mpg123Base * __Mpg123Base;
static struct Mpg123IFace * __IMpg123;

/****************************************************************************/

extern struct Mpg123Base * Mpg123Base;

/****************************************************************************/

void _INIT_5_IMpg123(void)
{
    if (Mpg123Base == NULL) /* Library base is NULL, we need to open it */
    {
        /* We were called before the base constructor.
         * This means we will be called _after_ the base destructor.
         * So we cant drop the interface _after_ closing the last library base,
         * we just open the library here which ensures that.
         */
        __Mpg123Base = Mpg123Base = (struct Mpg123Base *)IExec->OpenLibrary("mpg123.library", 53L);
        assert(Mpg123Base != NULL);
    }

    __IMpg123 = IMpg123 = (struct Mpg123IFace *)IExec->GetInterface((struct Library *)Mpg123Base, "main", 1, NULL);
    assert(IMpg123 != NULL);
}
__attribute__((section(".ctors.zzzy"))) static void
(*mpg123_main_constructor_ptr)(void) USED = _INIT_5_IMpg123;

/****************************************************************************/

void _EXIT_5_IMpg123(void)
{
    if (__IMpg123)
    {
        IExec->DropInterface ((struct Interface *)__IMpg123);
    }
    if (__Mpg123Base)
    {
        IExec->CloseLibrary((struct Library *)__Mpg123Base);
    }
}
__attribute__((section(".dtors.zzzy"))) static void
(*mpg123_main_destructor_ptr)(void) USED = _EXIT_5_IMpg123;

/****************************************************************************/

