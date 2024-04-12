#include <stdio.h>
int search (char*s1,char*s2);
void main ()
{
	char s1[100],s2[100];
	printf("enter source string:\n");
	gets(s1);
	printf("enter search string:\n");
	gets(s2);
	if(search(s1,s2)!=0)printf("first occurance of %s at index %d",s2,search(s1,s2));
	else printf("no occurance of this string");
}
int search (char*s1,char*s2)
{
	for(int i=0;s1[i]!=0;i++)
	{
		int j;
		for(j=0;s2[j]!=0;j++)
		{
			if(s1[i+j]!=s2[j])break;
		}
		if (s2[j]==0)return i;
	}
	return 0;
}