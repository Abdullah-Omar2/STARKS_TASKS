#include <stdio.h>
void main ()
{
	float a[10];
	printf("enter ten numbers\t");
	for (int i=0;i<10;i++)scanf("%f",&a[i]);
	for (int i=1;i<10;i++)
	{
		float v=a[i];
		int j=i-1;
		while (v<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=v;
	}
	printf("maximum value: %f\n",a[9]);
	printf("minimum value: %f\n",a[0]);
}