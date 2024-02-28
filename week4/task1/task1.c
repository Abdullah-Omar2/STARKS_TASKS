#include <stdio.h>
#include <string.h>
void main ()
{
	char x[100];
	printf("enter number\t");
	scanf("%s",&x);
	char i;
	for (i='0';i<='9';i++)
	{
	    if (strrchr(x,i)!=strchr(x,i))
	    {
		printf("yes");
		break;
	    }
	}
	if (strrchr(x,i)==strchr(x,i))printf("no");
} 
