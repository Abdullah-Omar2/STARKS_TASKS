#include <stdio.h>
#include "array-based-queue.h"
void display (queueentry e);
void main ()
{
	queue q;
	createqueue (&q);
	queueentry e;
	e.id=123;
	append (e,&q);
	append (e,&q);
	append (e,&q);
	append (e,&q);
	traversequeue (&q,&display);
	printf("%d\n",queuefull (&q));
	serve (&e,&q);
	printf("%d\n",e.id);
	printf("%d\n",queueempty (&q));
	printf("%d\n",queuesize (&q));
	clearqueue (&q);
	printf("%d\n",queueempty (&q));
}
void display (queueentry e)
{
	printf("id: %d\n",e.id);
}
