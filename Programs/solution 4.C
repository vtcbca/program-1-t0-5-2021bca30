#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0,c;
	clrscr();
	printf("\n enter a number to reverse:");
	scanf("%d",&a);
	c=a;
	while(a!=0)
	{
		b=b*10;
		b=b+a%10;
		a=a/10;
	}
	if(c==b)
		printf("%d is a pallindrome number",c);
	else
		printf("%d is not pallindrome number",c);
	getch();
}