#include<stdio.h>
#include<conio.h>
main()
{
	int i,a;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(a=i;a<=5;a++)
		{
		printf("%d",a);
		}
		printf("\n");
	}
	getch();
}
