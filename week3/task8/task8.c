#include <stdio.h>
float smallest (float x, float y, float z);
void main (void)
{
	float x,y,z;
	printf("enter three float numbers\t");
	scanf("%f %f %f",&x,&y,&z);
	printf("the smallest number is %f",smallest (x,y,z));
}
float smallest (float x, float y, float z)
{
	float smallest=x;
	if (y<x)smallest=y;
	if (z<y)smallest=z;
	return smallest;
}