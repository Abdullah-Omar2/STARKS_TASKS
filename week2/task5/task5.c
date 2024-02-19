#include <stdio.h>
void main (void)
{
	int n,a,b,result=0;
	printf("enter N\t");
	scanf("%d",&n);
	printf("enter A\t");
	scanf("%d",&a);
	printf("enter B\t");
	scanf("%d",&b);
	if (b>a)
	{
	for(int i=1;i<=n;i++)
	{
		int digit,sum=0,j=i;
		while(j>0)
		{
			digit=0;
		    digit =j%10;
			sum+=digit;
			j/=10;
		}
		if(sum>=a&&sum<=b)
		{
			result+=i;
		}
	}		
	printf("%d",result);
	}
	else 
	{
		printf("wrong region");
	}
}