#include <stdio.h>
void main ()
{
	int n;
	printf("enter number of numbers\t");
	scanf("%d",&n);
	int a[n];
	printf("enter numbers\t");
	for (int i=0;i<n;i++)scanf("%d",&a[i]);
	for (int i=1;i<n;i++)
	{
		int v=a[i];
		int j=i-1;
		while (v<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=v;
	}
	printf("biggest number: %d\n",a[n-1]);
	printf("smallest number: %d\n",a[0]);
	printf("biggest position: %d\n",n-1);
	printf("smallest position: %d\n",0);
}