#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#ifdef LIMITED_MEMORY

typedef struct stacknode 
{
	stackentry entry;
	struct stacknode *next;
}stacknode;

struct stack
{
	stacknode *top;
};

void createstack (pstack *pps)
{
	*pps=(struct stack *)malloc(sizeof(struct stack));
	(*pps)->top=NULL;
}
void push (stackentry e,pstack ps)
{
	stacknode *pn=(stacknode*)malloc(sizeof(stacknode));
	pn->entry=e;
	pn->next=ps->top;
	ps->top=pn;
}
int stackfull (pstack ps)
{
	return 0;
}
void pop (stackentry *pe,pstack ps)
{
	stacknode *pn;
	*pe=ps->top->entry;
	pn=ps->top;
	ps->top=ps->top->next;
	free(pn);
}
int stackempty (pstack ps)
{
	if (ps->top==NULL) return 1;
	else return 0;
}
void stacktop (stackentry *pe,pstack ps)
{
	*pe=ps->top->entry;
}
int stacksize (pstack ps)
{
	int x;
	stacknode *pn=ps->top;
	for (x=0;pn;pn=pn->next)x++;
	return x;
}
void clearstack (pstack *pps)
{
	stacknode *pn=(*pps)->top;
	while (pn)
	{
		pn=pn->next;
		free((*pps)->top);
		(*pps)->top=pn;
	}
}
void traversestack (pstack ps,void (*pf) (stackentry e))
{
	stacknode *pn=ps->top;
	while (pn)
	{
		pf(pn->entry);
		pn=pn->next;
	}
}

#else
	
struct stack 
{
	int top;
	stackentry entry[MAXSTACK];
};

void createstack (pstack *pps)
{
	*pps=(struct stack *)malloc(sizeof(struct stack));
	(*pps)->top=0;
}
void push (stackentry e,pstack ps)
{
	ps->entry[ps->top++]=e;
}
int stackfull (pstack ps)
{
	if (ps->top==MAXSTACK) return 1;
	else return 0;
}
void pop (stackentry *pe,pstack ps)
{
	*pe=ps->entry[--ps->top];
	
}
int stackempty (pstack ps)
{
	if (ps->top==0) return 1;
	else return 0;
}
void stacktop (stackentry *pe,pstack ps)
{
	*pe=ps->entry[ps->top-1];
}
int stacksize (pstack ps)
{
	return ps->top;
}
void clearstack (pstack *pps)
{
	(*pps)->top=0;
}
void traversestack (pstack ps,void (*pf) (stackentry e))
{
	for (int i=ps->top;i>0;i--)
		pf(ps->entry[i-1]);
}

#endif