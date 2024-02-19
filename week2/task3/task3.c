#include <stdio.h>
void main (void)
{
	for(;;)
	{
	   printf("enter number from 1 to 20\n");
	   char row;
	   scanf("%d",&row);
	   if (row>=1&&row<=20)
	   {
		   char n=1;
           for(char i=0;i<row;i++)
		   {
			   for(char j=0;j<3;j++)
			   {
				   printf("%d ",n);
				   if (n%3==0)printf("pum\n");
				   n++;
			   }
		   }			   
		
	   }
	   else
	   {
		   printf("wrong number\ntry again\n");
	   }
	}
}