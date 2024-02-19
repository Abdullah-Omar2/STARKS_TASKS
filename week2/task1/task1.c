#include <stdio.h>
void main (void)
{
	double n1,n2;
	for(;;)
	{
		printf("enter two numbers\n");
		scanf("%lf",&n1);
		scanf("%lf",&n2);
		printf("%lf + %lf = %lf\n",n1,n2,n1+n2);
	}
}