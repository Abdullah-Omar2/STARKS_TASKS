#ifndef STACK
#define STACK

#define LIMITED_MEMORY      

#include "global.h"

typedef struct stack * pstack;

void createstack (pstack *pps);
void push (stackentry e,pstack ps);
int stackfull (pstack ps);
void pop (stackentry *pe,pstack ps);
int stackempty (pstack ps);
void stacktop (stackentry *pe,pstack ps);
int stacksize (pstack ps);
void clearstack (pstack *pps);
void traversestack (pstack ps,void (*pf) (stackentry e));

#endif