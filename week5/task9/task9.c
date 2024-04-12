#include <stdio.h>
void calculateCube(void*n,int type);
void main ()
{
	int type;
	l1:
    printf("Enter the number of type (1=char, 2=int, 3=long int, 4=float, 5=double):\n");
    scanf("%d",&type);
    switch(type) 
	{
        case 1: 
		{
            char n;
            printf("Enter a char number:\n");
            scanf(" %c",&n);
            calculateCube(&n,type);
            printf("Cube of the number:%d\n",n);
            break;
        }
        case 2:
		{ 
            int n;
            printf("Enter an int number:\n");
            scanf("%d",&n);
            calculateCube(&n,type);
            printf("Cube of the number:%d\n",n);
            break;
        }
        case 3: 
		{ 
            long int n;
            printf("Enter a long int number:\n");
            scanf("%ld",&n);
            calculateCube(&n,type);
            printf("Cube of the number:%ld\n",n);
            break;
        }
        case 4: 
		{
            float n;
            printf("Enter a float number:\n");
            scanf("%f",&n);
            calculateCube(&n,type);
            printf("Cube of the number:%f\n",n);
            break;
        }
        case 5: 
		{ 
            double n;
            printf("Enter a double number:\n");
            scanf("%lf",&n);
            calculateCube(&n,type);
            printf("Cube of the number:%lf\n",n);
            break;
        }
        default:
            printf("Invalid type!\n");
            goto l1;
    }
}
void calculateCube(void*n,int type) 
{
    switch(type) 
	{
        case 1:
            *(char*)n=(*(char*)n)*(*(char*)n)*(*(char*)n);
            break;
        case 2:
            *(int*)n=(*(int*)n)*(*(int*)n)*(*(int*)n);
            break;
        case 3:
            *(long int*)n=(*(long int*)n)*(*(long int*)n)*(*(long int*)n);
            break;
        case 4:
            *(float*)n=(*(float*)n)*(*(float*)n)*(*(float*)n);
            break;
        case 5: 
            *(double*)n=(*(double*)n)*(*(double*)n)*(*(double*)n);
            break;
    }
}
