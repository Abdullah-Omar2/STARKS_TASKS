#include <stdio.h>
#include <stdlib.h>
#include "linked-based-stack.h"

void createstack (stack *ps)
{
	ps->top=NULL;
}
void push (stackentry e,stack *ps)
{
	stacknode *pn=(stacknode*)malloc(sizeof(stacknode));
	pn->entry=e;
	pn->next=ps->top;
	ps->top=pn;
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
	int x;
	stacknode *pn=ps->top;
	for (x=0;pn;pn=pn->next)x++;
	return x;
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