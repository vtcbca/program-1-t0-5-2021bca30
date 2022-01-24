
#include<stdio.h>
#include<conio.h>
void main()
{
	int no,c,sum=0;
	clrscr();
	printf("\n enter any number");
	scanf("%d",&no);
	while(no)
	{
		c=no%10;
		sum=sum+c;
		no=no/10;
	}
	printf("the sum of %d",sum);
	getch();
}