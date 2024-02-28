#include <stdio.h>
void palindrome (int x);
void main ()
{
	int x;
	printf("enter number\t");
	scanf("%d",&x);
	palindrome (x);
}
void palindrome (int x)
{
	int i=x,v=0;
	for (i;i>0;i/=10)
	{
		int d=i%10;
		v=v*10+d;
	}
	if (v==x)printf("palindrome number");
	else printf("not palindrome number");
}