#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	clrscr();

	printf("Enter the a : ");
	scanf("%d",&a);
	printf("Enter the b : ");
	scanf("%d",&b);
	printf("Enter the c : ");
	scanf("%d",&c);
	printf("Enter the d : ");
	scanf("%d",&d);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is maximum  : ");
			}
			else
			{
				printf("d is maximum : ");
			}
		}
		else
		{
			printf("c is maximum : ");
		}
	}
	else
	{
		if(b>c)
		{
			if(c>d)
			{
				printf("c is maximum : ");
			}
			else
			{
				printf("d is maximum : ");
			}
		}
		else
		{
			printf("d is maximum : ");
		}

	}
	getch();
}
