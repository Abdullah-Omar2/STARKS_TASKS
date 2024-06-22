#include <stdio.h>
#include "queue.h"
void display (queueentry e);
void main ()
{
	pqueue pq;
	createqueue (&pq);
	queueentry e;
	e.id=123;
	append (e,pq);
	append (e,pq);
	append (e,pq);
	append (e,pq);
	traversequeue (pq,&display);
	printf("%d\n",queuefull (pq));
	serve (&e,pq);
	printf("%d\n",e.id);
	printf("%d\n",queueempty (pq));
	printf("%d\n",queuesize (pq));
	clearqueue (&pq);
	printf("%d\n",queueempty (pq));
}
void display (queueentry e)
{
	printf("id: %d\n",e.id);
}
