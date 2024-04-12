#include <stdio.h>
void sort (int* ptr,int n);
void main ()
{
	int n;
	printf("enter length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter elements of array\n");
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	sort(a,n);
	printf("\narray after sort:\n");
	for(int i=0;i<n;i++)printf("%d ",a[i]);
}
void sort (int* a,int n)
{
    int i,j;
    for (i=0;i<n-1;i++)
	{
        for (j=0;j<n-i-1;j++)
		{
            if (a[j]>a[j+1])
			{
                int x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
}