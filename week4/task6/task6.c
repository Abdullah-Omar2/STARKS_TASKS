#include <stdio.h>
void main ()
{
	int r,c;
	printf("enter number of rows and columns\t");
	scanf("%d %d",&r,&c);
	int x[r][c],y[r][c];
	printf("enter elements of first matrix\n");
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)scanf("%d",&x[i][j]);
	}
	printf("enter elements of second matrix\n");
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)scanf("%d",&y[i][j]);
	}
	printf("the product of two matrises\n");
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)printf("%d ",x[i][j]*y[i][j]);
		printf("\n");
	}
}