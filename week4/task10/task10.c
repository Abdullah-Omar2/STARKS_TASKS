#include <stdio.h>
int comPare (char s1[],char s2[]);
int checkLength (char s1[],char s2[]);
void main ()
{
	char s1[100],s2[100];
	printf("enter first string:\t");
	scanf(" %s",s1);
	printf("enter second string:\t");
	scanf(" %s",s2);
	if (comPare (s1,s2))printf("Strings are equal");
	else printf("Strings are not equal");
}
int comPare (char s1[],char s2[])
{
	if(checkLength (s1,s2))return 0;
	for (int i=0;s1[i]!=0;i++)
	{
		if (s1[i]!=s2[i])return 0;
	}
	return 1;
}
int checkLength (char s1[],char s2[])
{
	int l1=0,l2=0;
	for (int i=0;s1[i]!=0;i++)
	{
		l1++;
	}
	for (int i=0;s2[i]!=0;i++)
	{
		l2++;
	}
	if (l1==l2)return 0;
	else return 1;
}