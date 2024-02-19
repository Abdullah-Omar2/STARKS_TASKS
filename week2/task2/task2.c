#include <stdio.h>
void main (void)
{
	int id1=9876;
	long int pass1=123456789;
	printf("enter id\n");
	int id; 
	scanf("%d",&id);
	if (id==id1)
	{
		long int pass;
		for (int i=0;i<3;i++)
		{
			printf("enter password\n");
            scanf("%ld",&pass);
			if (pass==pass1)
			{
				printf("welcome\n");
				break;
			}	
			else 
			{
				printf("wrong password\ntry again\n");
				continue;
			}

		}
		if (pass!=pass1)
		{
		printf("No more tries\n");
		}
	}
	else 
	{
		printf("You are not registered\n");
	}
}