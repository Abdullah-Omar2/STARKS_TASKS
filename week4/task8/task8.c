#include <stdio.h>
int frequency (char s[],char c);
void main ()
{
    char s[100],c;
	printf("enter string:\t");
	gets(s);
	printf("enter character:\t");
	scanf(" %c",&c);
	printf("frequency of character is %d",frequency (s,c));
}
int frequency (char s[],char c)
{
	int f=0;
	for (int i=0;s[i]!=0;i++)
	{
		if (s[i]==c)f++;
	}
	return f;
}