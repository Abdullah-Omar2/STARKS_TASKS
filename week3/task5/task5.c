#include <stdio.h>
int prime (int x);
void main (void)
{
	int x;
	printf("enter an integer number\t");
	scanf("%d",&x);
	if (prime(x)&&x!=2)printf("\n%d is a prime number",x);
	else if (x!=2) printf("\n%d is not a prime number",x);
}
int prime (int x)
{
	if (x==2)printf("\n2 is a prime number");
	else
    {
		for (int i=2;i<=x/2;i++)
	    {
			if (x%i==0)
			{
				return 0;
			}
	    }
		return 1;
	}
}