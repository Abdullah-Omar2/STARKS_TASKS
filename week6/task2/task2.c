#include "\Users\Abdullah O. Elazhary\STARKS\notepad++\std_types.h"
typedef struct
{
	u8 hours;
	u8 minutes;
	u8 seconds;
}time;
void CalculatePeriod (time ts,time te,time*p);
void main ()
{
	time ts1,te1,p1,ts2,te2,p2,def;
	printf("enter times in this form (hours minutes seconds)\n");
	printf("start time of first period:\t");
	scanf("%d %d %d",&ts1.hours,&ts1.minutes,&ts1.seconds);
	printf("end time of first period:\t");
	scanf("%d %d %d",&te1.hours,&te1.minutes,&te1.seconds);
	CalculatePeriod (ts1,te1,&p1);
	printf("first period: %d:%d:%d\n",p1.hours,p1.minutes,p1.seconds);
	printf("start time of second period:\t");
	scanf("%d %d %d",&ts2.hours,&ts2.minutes,&ts2.seconds);
	printf("end time of second period:\t");
	scanf("%d %d %d",&te2.hours,&te2.minutes,&te2.seconds);
	CalculatePeriod (ts2,te2,&p2);
	printf("second period: %d:%d:%d\n",p2.hours,p2.minutes,p2.seconds);
	CalculatePeriod (p1,p2,&def);
	printf(" Difference Between Two Time Periods: %d:%d:%d\n",def.hours,def.minutes,def.seconds);
}
void CalculatePeriod (time ts,time te,time*p)
{
	u16 x=ts.hours*60*60+ts.minutes*60+ts.seconds;
	u16 y=te.hours*60*60+te.minutes*60+te.seconds;
	s16 z=y-x;
	if (z<0)z=-1*z;
	p->hours=z/3600;
	z=z%3600;
	p->minutes=z/60;
	p->seconds=z%60;
}