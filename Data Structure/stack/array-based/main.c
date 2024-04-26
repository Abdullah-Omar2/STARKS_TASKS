#include <stdio.h>
#include "array-based-Stack.h"
void display (Stackentry e);
void main ()
{
	Stack s;
	createStack (&s);
	Stackentry e;
	e.id=123;
	push (e,&s);
	printf("%d\n",Stackfull (&s));
	Stacktop (&e,&s);
	printf("%d\n",e.id);
	pop (&e,&s);
	printf("%d\n",e.id);
	printf("%d\n",Stackempty (&s));
	printf("%d\n",Stacksize (&s));
	clearStack (&s);
	traverseStack (&s,&display);
}
void display (Stackentry e)
{
	printf("id: %d\n",e.id);
}
