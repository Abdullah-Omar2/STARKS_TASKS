#include <stdio.h>
void Unique (int a[],int n);
void main ()
{
	int n;
	printf("enter length of array\t");
	scanf("%d",&n);
	int a[n];
	printf("enter numbers\t");
	for (int i=0;i<n;i++)scanf("%d",&a[i]);
	printf("unique elements in an array: ");
	Unique (a,n);
}
void Unique (int a[],int n)
{
	for (int i=0;i<n;i++)
	{
		int u=0;
		for (int j=0;j<n;j++)
		{
			if (i!=j&&a[i]==a[j]){u=0;break;}
			else u=1;
		}
		if (u)printf("%d ",a[i]);
	}
}
