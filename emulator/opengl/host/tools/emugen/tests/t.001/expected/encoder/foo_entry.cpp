// Generated Code - DO NOT EDIT !!
// generated by 'emugen'
#include <stdio.h>
#include <stdlib.h>
#include "foo_client_context.h"

#ifndef GL_TRUE
extern "C" {
	void fooAlphaFunc(FooInt func, FooFloat ref);
	FooBoolean fooIsBuffer(void* stuff);
	void fooUnsupported(void* params);
};

#endif
#ifndef GET_CONTEXT
static foo_client_context_t::CONTEXT_ACCESSOR_TYPE *getCurrentContext = NULL;
void foo_client_context_t::setContextAccessor(CONTEXT_ACCESSOR_TYPE *f) { getCurrentContext = f; }
#define GET_CONTEXT foo_client_context_t * ctx = getCurrentContext() 
#endif

void fooAlphaFunc(FooInt func, FooFloat ref)
{
	GET_CONTEXT; 
	 ctx->fooAlphaFunc(ctx, func, ref);
}

FooBoolean fooIsBuffer(void* stuff)
{
	GET_CONTEXT; 
	 if (n == NULL) { LOG(ERROR) << "NULL stuff"; return; }
	 return ctx->fooIsBuffer(ctx, stuff);
}

void fooUnsupported(void* params)
{
	GET_CONTEXT; 
	 ctx->fooUnsupported(ctx, params);
}

