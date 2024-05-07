#include <stdio.h>
#include "array-based-stack.h"
void display (stackentry e);
void main ()
{
	stack s;
	createstack (&s);
	stackentry e;
	e.id=123;
	push (e,&s);
	printf("%d\n",stackfull (&s));
	stacktop (&e,&s);
	printf("%d\n",e.id);
	pop (&e,&s);
	printf("%d\n",e.id);
	printf("%d\n",stackempty (&s));
	printf("%d\n",stacksize (&s));
	clearstack (&s);
	traversestack (&s,&display);
}
void display (stackentry e)
{
	printf("id: %d\n",e.id);
}
