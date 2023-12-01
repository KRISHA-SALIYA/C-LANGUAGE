#include<stdio.h>
#include<conio.h>
main()
{
	char i='A',n='Z';
	clrscr();

	do
	{
		printf("%c  \t",i);
		i+=4;
	}
	while(i<='Z');
	getch();
}