#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d=1,e;
	printf("enter the number of terms");
	scanf("%d",&b);
	printf("fibonacci series:%d",c);
	e=d+c;
	for(a=3;a<=b,a++)
	{
		printf("%d",e);
		d=c;
		c=e;
		e=d+c;
	}
	getch();
}
