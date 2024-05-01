#ifndef FILE
#define FILE

typedef struct
{
	int id;
}stackentry;

typedef struct Stacknode
{
	stackentry entry;
	struct Stacknode *next;
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