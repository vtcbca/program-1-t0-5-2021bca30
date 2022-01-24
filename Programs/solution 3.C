#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0,c;
	clrscr();
	printf("\n enter any number to reverse");
	scanf("%d",&a);
	while(a>0)
	{
		c=a%10;
		a=a/10;
		b=b*10+c;
	}
	printf("reverse of a number %d",b);
	getch();
}