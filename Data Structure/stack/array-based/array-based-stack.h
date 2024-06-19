#ifndef FILE
#define FILE

#include "global.h"

typedef struct 
{
	int top;
	stackentry entry[MAXSTACK];
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