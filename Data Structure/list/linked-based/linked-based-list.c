#include <stdio.h>
#include <stdlib.h>
#include "linked-based-list.h"

void createlist (list *pl)
{
	pl->head=NULL;
	pl->size=0;
}
void insertlist (int p,listentry e,list *pl)
{
	listnode *pn,*qn;
	int i;
	pn=(listnode*)malloc(sizeof(listnode));
	pn->entry=e;
	pn->next=NULL;
	if (p==0)
	{
		pn->next=pl->head;
	    pl->head=pn;
	}
	else
	{
		for (qn=pl->head,i=0;i<p-1;i++)
		{
			qn=qn->next;
		}
		pn->next=qn->next;
		qn->next=pn;
	}
	pl->size++;
}
int listfull (list *pl)
{
	return 0;
}
void deletlist (int p,listentry *pe,list *pl)
{
	int i;
	listnode *pn,*qn;
	if(p==0)
	{
		*pe=pl->head->entry;
	    pn=pl->head->next;
		free(pl->head);
	    pl->head=pn;
	}
	else
	{
		for (qn=pl->head,i=0;i<p-1;i++)
		{
			qn=qn->next;
		}
		*pe=qn->next->entry;
		pn=qn->next->next;
		free(qn->next);
		qn->next=pn;
	}
	pl->size--;
}
int listempty (list *pl)
{
	if (pl->size==0) return 1;
	else return 0;
}
int listsize (list *pl)
{
	return pl->size;
}
void retrievelist (int p,listentry *pe,list *pl)
{
	int i;
	listnode *qn;
	for (qn=pl->head,i=0;i<p;i++)
	{
		qn=qn->next;
	}
	*pe=qn->entry;
}
void replacelist (int p,listentry e,list *pl)
{
	int i;
	listnode *qn;
	for (qn=pl->head,i=0;i<p;i++)
	{
		qn=qn->next;
	}
	qn->entry=e;
}
void destroylist (list *pl)
{
	listnode *pn;
	while (pl->head)
	{
		pn=pl->head->next;
		free(pl->head);
		pl->head=pn;
	}
	pl->size=0;
}
void traverselist (list *pl,void (*pf) (listentry e))
{
	listnode *pn=pl->head;
	while (pn)
	{
		pf(pn->entry);
		pn=pn->next;
	}
}