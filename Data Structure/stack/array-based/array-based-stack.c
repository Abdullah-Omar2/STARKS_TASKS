#include <stdio.h>
#include "array-based-stack.h"

void createstack (stack *ps)
{
	ps->top=0;
}
void push (stackentry e,stack *ps)
{
	ps->entry[ps->top++]=e;
}
int stackfull (stack *ps)
{
	if (ps->top==MAXSTACK) return 1;
	else return 0;
}
void pop (stackentry *pe,stack *ps)
{
	*pe=ps->entry[--ps->top];
	
}
int stackempty (stack *ps)
{
	if (ps->top==0) return 1;
	else return 0;
}
void stacktop (stackentry *pe,stack *ps)
{
	*pe=ps->entry[ps->top-1];
}
int stacksize (stack *ps)
{
	return ps->top;
}
void clearstack (stack *ps)
{
	ps->top=0;
}
void traversestack (stack *ps,void (*pf) (stackentry e))
{
	for (int i=ps->top;i>0;i--)
		pf(ps->entry[i-1]);
}