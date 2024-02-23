#include <stdio.h>
void main (void)
{
	float f1,f2,x;
	printf("enter two float values\t");
	scanf ("%f",&f1);
	scanf ("%f",&f2);
	printf("before swapping: %f , %f\n",f1,f2);
	x=f1;
	f1=f2;
	f2=x;
    printf("after swapping: %f , %f",f1,f2);
}