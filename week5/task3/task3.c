#include <stdio.h>
void SumAndDifAndMul(int a,int b,int* sum,int* dif,int* mul);
int main ( )
{
	int a,b,sum,dif,mul;
	printf("enter two numbers\t");
	scanf("%d %d",&a,&b);
	SumAndDifAndMul(a,b,&sum,&dif,&mul);
	printf("sum=%d ,dif=%d ,mul=%d",sum,dif,mul);
}
void SumAndDifAndMul(int a,int b,int* sum,int* dif,int* mul)
{
	*sum=a+b;
	*dif=a-b;
	*mul=a*b;
}