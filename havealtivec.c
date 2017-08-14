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

