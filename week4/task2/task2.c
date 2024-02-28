#include <stdio.h>
void main ()
{
	int a[5][5];
	for (int i=0;i<5;i++)
	{
		printf("enter row %d: ",i+1);
		for(int j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("row total: ");
	for (int i=0;i<5;i++)
	{
		int b=0;
		for(int j=0;j<5;j++)
		{
			b+=a[i][j];
		}
		printf("%d ",b);
	}
	printf("\ncolumn total: ");
	for (int i=0;i<5;i++)
	{
		int b=0;
		for(int j=0;j<5;j++)
		{
			b+=a[j][i];
		}
		printf("%d ",b);
	}
}