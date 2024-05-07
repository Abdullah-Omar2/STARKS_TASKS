#ifndef FILE
#define FILE

typedef struct
{
	int id;
}queueentry;

typedef struct queuenode
{
	queueentry entry;
	struct queuenode *next;
}queuenode;

typedef struct
{
	queuenode *front;
	queuenode *rear;
	int size;
}queue;

void createqueue (queue *pq);
void append (queueentry e,queue *pq);
int queuefull (queue *pq);
void serve (queueentry *pe,queue *pq);
int queueempty (queue *pq);
int queuesize (queue *pq);
void clearqueue (queue *pq);
void traversequeue (queue *pq,void (*pf) (queueentry e));

#endif