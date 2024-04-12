#include <stdio.h>
void VowelsAndConsonants(char* ptr);
void main ()
{
	char s[100];
	printf("enter a string\n");
	gets(s);
	VowelsAndConsonants(s);
}
void VowelsAndConsonants(char* ptr)
{
	int i=0,vo=0,co=0;
	while(ptr[i]!=0)
	{
		if(ptr[i]=='a'||ptr[i]=='A'||ptr[i]=='e'||ptr[i]=='E'||ptr[i]=='i'||ptr[i]=='I'||ptr[i]=='o'||ptr[i]=='O'||ptr[i]=='u'||ptr[i]=='U')
		{
			vo++;
		}
		else if(ptr[i]!=' ') co++;
		i++;
	}
	printf("number of vowels=%d     number of consonants=%d",vo,co);
}