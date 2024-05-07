#include <stdio.h>
#include "array-based-queue.h"
void display (queueentry e);
void main ()
{
	queue s;
	createqueue (&s);
	queueentry e;
	e.id=123;
	append (e,&s);
	printf("%d\n",queuefull (&s));
	serve (&e,&s);
	printf("%d\n",e.id);
	printf("%d\n",queueempty (&s));
	printf("%d\n",queuesize (&s));
	clearqueue (&s);
	traversequeue (&s,&display);
}
void display (queueentry e)
{
	printf("id: %d\n",e.id);
}
