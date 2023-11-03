#include<stdio.h>
#include<conio.h>
main ()
  {
	const float pi=3.14;

	float r=4, l=8,  b=6 ,base=3, h=5, p=4,t=6;

	clrscr();

	printf("area of circle = %.2f\n",pi*r*r);

	printf("area of rectangle  = %.2f\n",l*b);

	printf("area of triangle= %.2f\n",0.5*base*h);

	printf("simple interest = %.2f\n",p*1+r*t);

	printf("perimeter of circle = %.2f\n",2*pi*r);

	getch();
}