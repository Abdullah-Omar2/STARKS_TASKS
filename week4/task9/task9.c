#include <stdio.h>
char rePlacer (char s[],char c);
void main ()
{
	char s[100],c;
	printf("enter string:\t");
	gets(s);
	printf("enter character:\t");
	scanf(" %c",&c);
	rePlacer (s,c);
	printf("new string:\t%s",s);
}
char rePlacer (char s[],char c)
{
	for (int i=0;s[i]!=0;i++)
	{
		if (s[i]==' ')s[i]=c;
	}
	return *s;
}