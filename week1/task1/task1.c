#include <stdio.h>
void main (void)
{
	char i,c;
	float f;
	printf("enter an integer value\n");
	scanf("%d",&i);
	printf("enter a character value\n");
	scanf(" %c",&c);
	printf("enter a float value\n");
	scanf("%f",&f);
    printf("integer: %d ,character: %c ,float: %f",i,c,f);
}