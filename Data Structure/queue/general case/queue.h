#ifndef QUEUE
#define QUEUE

#define LIMITED_MEMORY      

#include "global.h"

typedef struct queue* pqueue;

void createqueue (pqueue *ppq);
void append (queueentry e,pqueue pq);
int queuefull (pqueue pq);
void serve (queueentry *pe,pqueue pq);
int queueempty (pqueue pq);
int queuesize (pqueue pq);
void clearqueue (pqueue *ppq);
void traversequeue (pqueue pq,void (*pf) (queueentry e));

#endif