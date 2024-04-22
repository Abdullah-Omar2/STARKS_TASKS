#include <stdio.h>
#include "\Users\Abdullah O. Elazhary\STARKS\notepad++\std_types.h"
#define ARRAY_SIZE 5
#define ARRAY_SUM(arr, len) (\
{\
    int sum=0;\
    for(int i=0;i<len;i++)\
	{\
        sum+=arr[i];\
    }\
    sum;\
})
void main()
{
    s32 arr[ARRAY_SIZE]={1,2,3,4,5};
    s32 sum=ARRAY_SUM(arr, ARRAY_SIZE);
    printf("Sum of the array: %d\n",sum);
}