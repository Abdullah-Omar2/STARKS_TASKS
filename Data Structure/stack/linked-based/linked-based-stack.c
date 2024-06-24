#include <stdio.h>
#include <stdlib.h>
#include "linked-based-stack.h"

void createstack (stack *ps)
{
	ps->top=NULL;
	ps->size=0;
}
void push (stackentry e,stack *ps)
{
	stacknode *pn=(stacknode*)malloc(sizeof(stacknode));
	pn->entry=e;
	pn->next=ps->top;
	ps->top=pn;
	ps->size++;
}
int stackfull (stack *ps)
{
	return 0;
}
void pop (stackentry *pe,stack *ps)
{
	stacknode *pn;
	*pe=ps->top->entry;
	pn=ps->top;
	ps->top=ps->top->next;
	free(pn);
	ps->size--;
}
int stackempty (stack *ps)
{
	if (ps->top==NULL) return 1;
	else return 0;
}
void stacktop (stackentry *pe,stack *ps)
{
	*pe=ps->top->entry;
}
int stacksize (stack *ps)
{
	return ps->size;
}
void clearstack (stack *ps)
{
	stacknode *pn=ps->top;
	while (pn)
	{
		pn=pn->next;
		free(ps->top);
		ps->top=pn;
	}
	ps->size=0;
}
void traversestack (stack *ps,void (*pf) (stackentry e))
{
	stacknode *pn=ps->top;
	while (pn)
	{
		pf(pn->entry);
		pn=pn->next;
	}
}