#include <stdio.h>
void perfect (char x);
void main (void)
{
	for (char i=2;i<=100;i++)
	{
		perfect(i);
	}
}
void perfect (char x)
{
	char y=0;
	for (char i=1;i<=x/2;i++)
	{
		if (x%i==0)y+=i;
	}
	if (x==y)printf("%d ",x);
}