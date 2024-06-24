#include <stdio.h>
#include "array-based-list.h"

void createlist (list *pl)
{
	pl->size=0;
}
void insertlist (int p,listentry e,list *pl)
{
	int i;
	for (i=pl->size-1;i>=p;i--)
	{
		pl->entry[i+1]=pl->entry[i];
	}
	pl->entry[p]=e;
	pl->size++;
}
int listfull (list *pl)
{
	if (pl->size==MAXLIST) return 1;
	else return 0;
}
void deletlist (int p,listentry *pe,list *pl)
{
	int i;
	*pe=pl->entry[p];
	for (i=p+1;i<=pl->size-1;i++)
	{
		pl->entry[i-1]=pl->entry[i];
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
	*pe=pl->entry[p];
}
void replacelist (int p,listentry e,list *pl)
{
	pl->entry[p]=e;
}
void destroylist (list *pl)
{
	pl->size=0;
}
void traverselist (list *pl,void (*pf) (listentry e))
{
	for (int i=0;i<pl->size;i++)
		pf(pl->entry[i]);
}