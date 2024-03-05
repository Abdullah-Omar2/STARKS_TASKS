#include <stdio.h>
void NumPassAndFail (int a[],int b[],int c[]);
void sort (int a[]);
int highest (int a,int b,int c);
int lowest (int a,int b,int c);
int average (int a[],int b[],int c[]);
void main ()
{
	int c1[10]={50,64,99,78,67,47,98,67,34,45};
	int c2[10]={87,65,78,65,84,65,42,51,49,44};
	int c3[10]={20,55,96,44,77,66,54,88,65,45};
	sort(c1);
	sort(c2);
	sort(c3);
    NumPassAndFail (c1,c2,c3);
	printf("highest degree is %d\n",highest(c1[9],c2[9],c3[9]));
	printf("lowest degree is %d\n",lowest(c1[0],c2[0],c3[0]));
	printf("average degree is %d\n",average(c1,c2,c3)/30);
}
void sort (int a[])
{
	for (int i=1;i<10;i++)
	{
		int v=a[i];
		int j=i-1;
		while (v<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=v;
	}
}
void NumPassAndFail (int a[],int b[],int c[])
{
	int p=0,f=0;
	for (int i=0;i<10;i++)
	{
		if (a[i]>=50)p++;
		else f++;
	}
	for (int i=0;i<10;i++)
	{
		if (b[i]>=50)p++;
		else f++;
	}
	for (int i=0;i<10;i++)
	{
		if (c[i]>=50)p++;
		else f++;
	}
	printf("number of passed students is %d and number of failed students is %d\n",p,f);
}
int highest (int a,int b,int c)
{
	int max;
	if (a>b)max=a;
	else max=b;
	if (max<c)max=c;
	return max;
}
int lowest (int a,int b,int c)
{
	int min;
	if (a<b)min=a;
	else min=b;
	if (min>c)min=c;
	return min;
}
int average (int a[],int b[],int c[])
{
	int d=0;
	for (int i=0;i<10;i++)d+=a[i];
	for (int i=0;i<10;i++)d+=b[i];
	for (int i=0;i<10;i++)d+=c[i];
	return d;
}
