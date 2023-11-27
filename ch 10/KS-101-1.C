#include<stdio.h>
#include<conio.h>
main ()
{
      int i,a;
      clrscr();

      for(i=1;i<=5;i++)
      {
		for(a=i;a>=1;a--)
		{
			printf("%d",a);

		}
	   printf("\n");

      }
      getch();


}