#ifndef LLIST
#define LLIST

#include "global.h"

typedef struct listnode 
{
	listentry entry;
	struct listnode *next;
}listnode;

typedef struct 
{
	listnode *head;
	int size;
}list;

void createlist (list *pl);
void insertlist (int p,listentry e,list *pl);
int listfull (list *pl);
void deletlist (int p,listentry *pe,list *pl);
int listempty (list *pl);
int listsize (list *pl);
void retrievelist (int p,listentry *pe,list *pl);
void replacelist (int p,listentry e,list *pl);
void destroylist (list *pl);
void traverselist (list *pl,void (*pf) (listentry e));

#endif