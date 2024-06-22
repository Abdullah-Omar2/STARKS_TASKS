#include <stdio.h>
#include "stack.h"
void display (stackentry e);
void main ()
{
	pstack ps;
	createstack (&ps);
	stackentry e;
	e.id=123;
	push (e,ps);
	push (e,ps);
	push (e,ps);
	push (e,ps);
	traversestack (ps,&display);
	printf("%d\n",stackfull (ps));
	stacktop (&e,ps);
	printf("%d\n",e.id);
	pop (&e,ps);
	printf("%d\n",e.id);
	printf("%d\n",stackempty (ps));
	printf("%d\n",stacksize (ps));
	clearstack (&ps);
	printf("%d\n",stackempty (ps));
}
void display (stackentry e)
{
	printf("id: %d\n",e.id);
}
