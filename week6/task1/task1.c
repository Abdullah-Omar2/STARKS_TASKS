#include "\Users\Abdullah O. Elazhary\STARKS\notepad++\std_types.h"
typedef struct
{
	u16 salary;
	u16 bonus;
	u16 deductions;
}employee;
void main ()
{
	employee Ahmed;
	employee Waleed;
	employee Amr;
	printf("enter salary of Ahmed:\t");
	scanf("%d",&Ahmed.salary);
	printf("enter bonus of Ahmed:\t");
	scanf("%d",&Ahmed.bonus);
	printf("enter deductions of Ahmed:\t");
	scanf("%d",&Ahmed.deductions);
	printf("enter salary of Waleed:\t");
	scanf("%d",&Waleed.salary);
	printf("enter bonus of Waleed:\t");
	scanf("%d",&Waleed.bonus);
	printf("enter deductions of Waleed:\t");
	scanf("%d",&Waleed.deductions);
	printf("enter salary of Amr:\t");
	scanf("%d",&Amr.salary);
	printf("enter bonus of Amr:\t");
	scanf("%d",&Amr.bonus);
	printf("enter deductions of Amr:\t");
	scanf("%d",&Amr.deductions);
	printf(" the total value shall be supplied by finance team:\t%d",(Ahmed.salary+Ahmed.bonus\
	-Ahmed.deductions+Waleed.salary+Waleed.bonus-Waleed.deductions+Amr.salary+Amr.bonus-Amr.deductions));
	
	
}