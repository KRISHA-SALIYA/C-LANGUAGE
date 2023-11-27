#include<stdio.h>
#include<conio.h>
main()
{
	int i,a;
	clrscr();

	for(i='A'; i<='E'; i++)
	{
		for(a=i; a>='A'; a--)
		{
			printf("%c ",a);
		}
		printf("\n");
	}

	getch();
}