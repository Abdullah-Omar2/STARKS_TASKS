#include <stdio.h>
void reverse (int *a,int n);
void main ()
{
	int n;
	printf("enter length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter elements of array\n");
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	reverse (a,n);
	printf("\narray after reverse:\n");
	for(int i=0;i<n;i++)printf("%d ",a[i]);
}
void reverse (int *a,int n)
{
	for (int i=0;i<n/2;i++)
	{
		int x=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=x;
	}
}