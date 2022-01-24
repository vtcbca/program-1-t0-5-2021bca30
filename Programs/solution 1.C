#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,c=0;
	clrscr();
	printf("\nenter any number");
	scanf("%d",&no);
	i=2;
	while(i<no)
	{
		if(no%i==0)
	{
		c=c+1;
		break;
	}
		i=i+1;
	}
		if(c==1)
		printf("\n this number is not prime",no);
		else
		printf("\n this number is prime",no);
		getch();
}


