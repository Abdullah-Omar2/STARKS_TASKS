#include <stdio.h>
int factorial (int *a);
void main ()
{
	int x;
	int *ptr=&x;
	printf("enter number\t");
	scanf("%d",ptr);
	factorial(ptr);
	printf("the factorial is %d",*ptr);
}
int factorial (int *a)
{
   for (int i =*a-1 ; i >= 1; i--)*a *= i;	
}