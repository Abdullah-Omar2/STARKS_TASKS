#include <stdio.h>
#include "array-based-Stack.h"

void createStack (Stack *ps)
{
	ps->top=0;
}
void push (Stackentry e,Stack *ps)
{
	ps->entry[ps->top++]=e;
}
int Stackfull (Stack *ps)
{
	if (ps->top==MAXStack) return 1;
	else return 0;
}
void pop (Stackentry *pe,Stack *ps)
{
	*pe=ps->entry[--ps->top];
	
}
int Stackempty (Stack *ps)
{
	if (ps->top==0) return 1;
	else return 0;
}
void Stacktop (Stackentry *pe,Stack *ps)
{
	*pe=ps->entry[ps->top-1];
}
int Stacksize (Stack *ps)
{
	return ps->top;
}
void clearStack (Stack *ps)
{
	ps->top=0;
}
void traverseStack (Stack *ps,void (*pf) (Stackentry e))
{
	for (int i=ps->top;i>0;i--)
		pf(ps->entry[i-1]);
}