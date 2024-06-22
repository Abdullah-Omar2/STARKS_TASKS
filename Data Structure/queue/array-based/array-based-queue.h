#ifndef AQUEUE
#define AQUEUE

#include "global.h"

typedef struct 
{
	int front;
	int rear;
	int size;
	queueentry entry[MAXQUEUE];
}queue;

void createqueue (queue *pq);
void append (queueentry e,queue *pq);
int queuefull (queue *pq);
void serve (queueentry *pe,queue *pq);
int queueempty (queue *pq);
void queuetop (queueentry *pe,queue *pq);
int queuesize (queue *pq);
void clearqueue (queue *pq);
void traversequeue (queue *pq,void (*pf) (queueentry e));

#endif