#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("enter the value");
	scanf("%d",&n);

	if(n>0)
	{
		printf("positive number : ");
	}
	else if(n==0)
	{
		printf("neutral number : ");
	}
	else
	{
		printf("nagative number : ");
	}
	getch();

}