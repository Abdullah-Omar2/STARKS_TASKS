#include <stdio.h>
void main (void)
{
	int n,m;
	for (;;)
	{
		int sum=0;
		printf("enter two numbers:  ");
		scanf("%d %d",&n,&m);
		if (n<=0||m<=0)
		{
			printf("wrong inputs\ntry again\n");
			continue;
		}
		if (n>m)
		{
			for (int i=m;i<=n;i++)
			{
				printf("%d ",i);
				sum+=i;
			}
			printf(" sum= %d\n",sum);
		}
		else 
		{
			for (int i=n;i<=m;i++)
			{
				printf("%d ",i);
				sum+=i;
			}
			printf(" sum= %d\n",sum);
		}
	}
}