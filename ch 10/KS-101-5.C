#include<stdio.h>
#include<conio.h>
main()
{
	int i,a;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(a=5;a>=i;a--)
		{
			printf("%d",i);
		}
		printf("\n");
	 }
	getch();
}