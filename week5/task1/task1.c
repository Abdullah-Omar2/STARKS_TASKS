#include <stdio.h>
void main ()
{
	char x='A';
	char* ptr=&x;
	while (*ptr<='Z')
	{
		printf("%c ",(*ptr)++);
	}
}