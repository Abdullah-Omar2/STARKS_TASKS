#include <stdio.h>
#include "array-based-queue.h"

void createqueue (queue *pq)
{
	pq->front=0;
	pq->rear=-1;
	pq->size=0;
}
void append (queueentry e,queue *pq)
{
	pq->rear=(pq->rear+1)%MAXQUEUE;
	pq->entry[pq->rear]=e;
	pq->size++;
}
int queuefull (queue *pq)
{
	return (pq->size==MAXQUEUE);
}
void serve (queueentry *pe,queue *pq)
{
	*pe=pq->entry[pq->front];
	pq->front=(pq->front+1)%MAXQUEUE;
	pq->size--;
}
int queueempty (queue *pq)
{
	return !pq->size;
}
int queuesize (queue *pq)
{
	return pq->size;
}
void clearqueue (queue *pq)
{
	pq->front=0;
	pq->rear=-1;
	pq->size=0;
}
void traversequeue (queue *pq,void (*pf) (queueentry e))
{
	int pos,s;
	for (pos=pq->front,s=0;s>pq->size;s++)
	{
		pf(pq->entry[pos]);
	    pos=(pos+1)%MAXQUEUE;
	}
}