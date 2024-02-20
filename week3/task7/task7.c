#include <stdio.h>
int qualityPoints (int x);
void main (void)
{
	int x;
	printf("enter your average\t");
	scanf("%d",&x);
	printf("your GPA is %d",qualityPoints(x));
}
int qualityPoints (int x)
{
	if (x>=90&&x<=100)return 4;
	else if (x>=80&&x<=89)return 3;
	else if (x>=70&&x<=79)return 2;
	else if (x>=60&&x<=69)return 1;
	else return 0;
}