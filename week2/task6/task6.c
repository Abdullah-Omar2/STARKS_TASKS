#include <stdio.h>
void main (void)
{
	int a,b;
	printf("enter weight of Limak\t");
	scanf("%d",&a);
	printf("enter weight of Bob\t");
	scanf("%d",&b);
	if (b>=a)
	{
		int c=0;
		for(;;)
		{
			a*=3,b*=2,c++;
			if (a>b)
			{
				printf("%d years",c);
				break;
			}
		}
	}
	else 
	{
		printf("wrong inputs");
	}
}