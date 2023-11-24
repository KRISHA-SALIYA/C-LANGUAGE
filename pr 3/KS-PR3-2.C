#include<stdio.h>
#include<conio.h>
main()
{
	int n,digit=0;
	clrscr();

	printf("enter any number : ");
	scanf("%d",&n);

	while(n!=0)
	{
		n=n/10;
		digit++;

	}
	printf("enter total number of digit %d",digit);
	grtch();
}