#include <stdio.h>
int reverse (int x);
void main (void)
{
	int x;
	printf("enter an integer number\t");
	scanf("%d",&x);
	printf("\n%d",reverse(x));
}
int reverse(int x)
{
    int result=0;
    for(x;x>0;x/=10)
    {
        result=result*10+x%10;
    }
    return result;
}
