#include <stdio.h>
void main ()
{
	int a[10],e=0,o=1;
	printf("enter numbers\t");
	for (int i=0;i<10;i++)scanf("%d",&a[i]);
	for (int i=0;i<10;i++)
	{
		if(a[i]%2==0)e+=a[i];
		else o*=a[i];
	}
	printf("sum of even numbers: %d\n",e);
	printf("product of odd numbers: %d",o);
}