#include <stdio.h>
void main (void)
{
	float x,y;
	printf("enter two numbers\n");
	scanf("%f",&x);
	scanf("%f",&y);
	printf("%f + %f = %f\n",x,y,x+y);
	printf("%f - %f = %f\n",x,y,x-y);
	printf("%f * %f = %f\n",x,y,x*y);
	printf("%f / %f = %f\n",x,y,x/y);
}