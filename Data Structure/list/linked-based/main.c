#include <stdio.h>
#include "linked-based-list.h"
void display (listentry e);
void main ()
{
	list l;
	createlist (&l);
	listentry e,a;
	e.id=123;
	a.id=456;
	insertlist (0,e,&l);
	insertlist (1,e,&l);
	insertlist (2,e,&l);
	insertlist (3,e,&l);
	traverselist (&l,&display);
	printf("%d\n",listfull (&l));
	retrievelist (2,&e,&l);
	printf("%d\n",e.id);
	deletlist (2,&e,&l);
	printf("%d\n",e.id);
	printf("%d\n",listempty (&l));
	printf("%d\n",listsize (&l));
	replacelist (1,a,&l);
	traverselist (&l,&display);
	destroylist (&l);
	printf("%d\n",listempty (&l));
}
void display (listentry e)
{
	printf("id: %d\n",e.id);
}
