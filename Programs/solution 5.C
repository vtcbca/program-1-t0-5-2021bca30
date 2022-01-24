#include<stdio.h>
#include<conio.h>
void main()
{
	int no,r,n,sum=0;
	clrscr();
	printf("\n enter a number:");
	printf("enter a 3 digit no");
	scanf("%d",&no);
	r=no;
	while(no>0)
	{
		n=no%10;
		sum=sum+n*n*n;
		no=no/10;
	}
	if(sum==r)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not armstrong");
	}
	getch();
}

