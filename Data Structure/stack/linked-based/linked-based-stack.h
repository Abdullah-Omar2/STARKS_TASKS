#ifndef LSTACK
#define LSTACK

#include "global.h"

typedef struct stacknode 
{
	stackentry entry;
	struct stacknode *next;
}stacknode;

typedef struct 
{
	stacknode *top;
}stack;

void createstack (stack *ps);
void push (stackentry e,stack *ps);
int stackfull (stack *ps);
void pop (stackentry *pe,stack *ps);
int stackempty (stack *ps);
void stacktop (stackentry *pe,stack *ps);
int stacksize (stack *ps);
void clearstack (stack *ps);
void traversestack (stack *ps,void (*pf) (stackentry e));

#endif