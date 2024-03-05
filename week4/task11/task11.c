#include <stdio.h>
void Concatenate (char a[],char b[]);
void main ()
{
	char a[100],b[100];
	printf("enter the first string:\t");
	gets(a);
	printf("enter the second string:\t");
	gets(b);
	Concatenate (a,b);
	printf("After concatenation the string is:\t%s",a);
}
void Concatenate (char a[],char b[])
{
	int i;
	for (i=0;a[i]!=0;i++);
	a[i++]=' ';
	for (int j=0;b[j]!=0;j++)
	{
		a[i++]=b[j];
	}
	a[i]=0;
}