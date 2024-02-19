#include <stdio.h>
void binary (int x);
void main (void)
{
	int x;
	printf("enter integer number\t");
	scanf("%d",&x);
	binary(x);
}
void binary (int x)
{
	if (x>0)binary(x/2);
	if (x%2==0)printf("0 ");
	else printf("1 ");
}