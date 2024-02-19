#include <stdio.h>
void main (void)
{
	float f1,f2;
	printf("before scanning: %f , %f\n",f1,f2);
	printf("enter two float values\n");
	scanf ("%f",&f1);
	scanf ("%f",&f2);
    printf("after scanning: %f , %f",f1,f2);
}