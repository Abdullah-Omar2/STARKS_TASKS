#include <stdio.h>
void main (void)
{
	char x;
	printf("enter a character\n");
	scanf(" %c",&x);
	printf("%c ----> %d\n",x,x);
	printf("the previous character: %c , the next character: %c",x-1,x+1);
}