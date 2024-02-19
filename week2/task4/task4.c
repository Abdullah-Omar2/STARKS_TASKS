#include <stdio.h>
void main (void)
{
	int v,a,b,c;
	printf("enter the amount of shampoo\n");
	scanf("%d",&v);
	printf("enter the amount of shampoo use by father\n");
	scanf("%d",&a);
	printf("enter the amount of shampoo used by mather\n");
	scanf("%d",&b);
	printf("enter the amount of shampoo used by Takahashi\n");
	scanf("%d",&c);
	for(;;)
	{
		v-=a;
		if(v<0){printf("F"); break;}
		v-=b;
		if(v<0){printf("M"); break;}
		v-=c;
		if(v<0){printf("T"); break;}
	}
}