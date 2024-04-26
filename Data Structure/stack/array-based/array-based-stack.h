#ifndef FILE
#define FILE

#define MAXStack 100

typedef struct
{
	int id;
}Stackentry;

typedef struct
{
	int top;
	Stackentry entry[MAXStack];
}Stack;

void createStack (Stack *ps);
void push (Stackentry e,Stack *ps);
int Stackfull (Stack *ps);
void pop (Stackentry *pe,Stack *ps);
int Stackempty (Stack *ps);
void Stacktop (Stackentry *pe,Stack *ps);
int Stacksize (Stack *ps);
void clearStack (Stack *ps);
void traverseStack (Stack *ps,void (*pf) (Stackentry e));

#endif