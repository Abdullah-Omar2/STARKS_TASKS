#include <stdio.h>
#include <stdlib.h>
#include "linked-based-queue.h"

void createqueue (queue *pq)
{
	pq->front=NULL;
	pq->rear=NULL;
	pq->size=0;
}
void append (queueentry e,queue *pq)
{
	queuenode *pn=(queuenode*)malloc(sizeof(queuenode));
	pn->next=NULL;
	pn->entry=e;
	if(!pq->rear)pq->front=pn;
	else
	{
		pq->rear->next=pn;
	    pq->rear=pn;
	}
	pq->size++;
}
int queuefull (queue *pq)
{
	return 0;
}
void serve (queueentry *pe,queue *pq)
{
	queuenode *pn=pq->front;
	*pe=pn->entry;
	pq->front=pn->next;	
	free(pn);
	if(!pq->front)pq->rear=NULL;
	pq->size--;
}
int queueempty (queue *pq)
{
	return (!pq->front);
}
int queuesize (queue *pq)
{
	return pq->size;
}
void clearqueue (queue *pq)
{
	while (pq->front)
	{
		pq->rear=pq->front->next;
		free(pq->front);
		pq->front=pq->rear;
	}
	pq->size=0;
}
void traversequeue (queue *pq,void (*pf) (queueentry e))
{
	for(queuenode *pn=pq->front;pn;pn=pn->next)
		pf(pn->entry);
}