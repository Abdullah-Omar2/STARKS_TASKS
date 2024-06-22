#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#ifdef LIMITED_MEMORY

typedef struct queuenode
{
	queueentry entry;
	struct queuenode *next;
}queuenode;

struct queue
{
	queuenode *front;
	queuenode *rear;
	int size;
};

void createqueue (pqueue *ppq)
{
	*ppq=(struct queue *)malloc(sizeof(struct queue));
	(*ppq)->front=NULL;
	(*ppq)->rear=NULL;
	(*ppq)->size=0;
}
void append (queueentry e,pqueue pq)
{
	queuenode *pn=(queuenode*)malloc(sizeof(queuenode));
	pn->next=NULL;
	pn->entry=e;
	if(!pq->rear)pq->front=pn;
	else
	{
		pq->rear->next=pn;
	}
    pq->rear=pn;	
	pq->size++;
}
int queuefull (pqueue pq)
{
	return 0;
}
void serve (queueentry *pe,pqueue pq)
{
	queuenode *pn=pq->front;
	*pe=pn->entry;
	pq->front=pn->next;	
	free(pn);
	if(!pq->front)pq->rear=NULL;
	pq->size--;
}
int queueempty (pqueue pq)
{
	return (!pq->front);
}
int queuesize (pqueue pq)
{
	return pq->size;
}
void clearqueue (pqueue *ppq)
{
	while ((*ppq)->front)
	{
		(*ppq)->rear=(*ppq)->front->next;
		free((*ppq)->front);
		(*ppq)->front=(*ppq)->rear;
	}
	(*ppq)->size=0;
}
void traversequeue (pqueue pq,void (*pf) (queueentry e))
{
	for(queuenode *pn=pq->front;pn;pn=pn->next)
		pf(pn->entry);
}

#else
	
struct queue
{
	int front;
	int rear;
	int size;
	queueentry entry[MAXQUEUE];
};
	
void createqueue (pqueue *ppq)
{
	*ppq=(struct queue *)malloc(sizeof(struct queue));
	(*ppq)->front=0;
	(*ppq)->rear=-1;
	(*ppq)->size=0;
}
void append (queueentry e,pqueue pq)
{
	pq->rear=(pq->rear+1)%MAXQUEUE;
	pq->entry[pq->rear]=e;
	pq->size++;
}
int queuefull (pqueue pq)
{
	return (pq->size==MAXQUEUE);
}
void serve (queueentry *pe,pqueue pq)
{
	*pe=pq->entry[pq->front];
	pq->front=(pq->front+1)%MAXQUEUE;
	pq->size--;
}
int queueempty (pqueue pq)
{
	return !pq->size;
}
int queuesize (pqueue pq)
{
	return pq->size;
}
void clearqueue (pqueue *ppq)
{
	(*ppq)->front=0;
	(*ppq)->rear=-1;
	(*ppq)->size=0;
}
void traversequeue (pqueue pq,void (*pf) (queueentry e))
{
	int pos,s;
	for (pos=pq->front,s=0;s<pq->size;s++)
	{
		pf(pq->entry[pos]);
	    pos=(pos+1)%MAXQUEUE;
	}
}

#endif