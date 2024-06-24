#include <stdio.h>
#include "list.h"
void display (listentry e);
void main ()
{
	plist pl;
	createlist (&pl);
	listentry e,a;
	e.id=123;
	a.id=456;
	insertlist (0,e,pl);
	insertlist (1,e,pl);
	insertlist (2,e,pl);
	insertlist (3,e,pl);
	traverselist (pl,&display);
	printf("%d\n",listfull (pl));
	retrievelist (2,&e,pl);
	printf("%d\n",e.id);
	deletlist (2,&e,pl);
	printf("%d\n",e.id);
	printf("%d\n",listempty (pl));
	printf("%d\n",listsize (pl));
	replacelist (1,a,pl);
	traverselist (pl,&display);
	destroylist (&pl);
	printf("%d\n",listempty (pl));
}
void display (listentry e)
{
	printf("id: %d\n",e.id);
}
