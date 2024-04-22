#include <stdio.h>
#include "\Users\Abdullah O. Elazhary\STARKS\notepad++\std_types.h"
#define ADD(X,Y) X+Y
#define SUB(X,Y) X-Y
#define MUL(X,Y) X*Y
#define DIV(X,Y) X/Y
#define MOD(X,Y) X%Y
void main ()
{
	s32 o,x,y,res;
	printf("enter the number of operation(1-> +  2-> -  3-> *  4-> /  5-> %%)\t");
	scanf("%d",&o);
	printf("enter first number\t");
	scanf("%d",&x);
	printf("enter second number\t");
	scanf("%d",&y);
	switch(o)
	{
		case 1:
		res=ADD(x,y);
		break;
		case 2:
		res=SUB(x,y);
		break;
		case 3:
		res=MUL(x,y);
		break;
		case 4:
		res=DIV(x,y);
		break;
		case 5:
		res=MOD(x,y);
		break;
		default:
		printf("wrong input");
		break;
	}
	printf("result = %d",res);
}