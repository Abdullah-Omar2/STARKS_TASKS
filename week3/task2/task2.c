#include <stdio.h>
void Fibonacci (unsigned int x);
void main (void)
{
	unsigned int x;
	printf("enter long of Fibonacci series\t");
	scanf("%u",&x);
	Fibonacci(x);
}
void Fibonacci (unsigned int x)
{
	unsigned long long int a=0,b=1,c;
	for (int i=0;i<x;i++)
	{
		printf("%llu ",a);
		c=a+b;
		a=b;
		b=c;
	}
}