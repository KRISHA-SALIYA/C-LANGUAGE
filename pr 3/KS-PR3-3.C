#include<stdio.h>
#include<conio.h>
main()
{
	int n,ln,sum;
	clrscr();
	printf("enter any number : ");
	scanf("%d",&n);

	ln=%10;

	while(n>=9)
	{
		n=n/10;
	}
	sum=n+ln;
	printf("sum of first number and last number : %d ",sum );
	getch();
}