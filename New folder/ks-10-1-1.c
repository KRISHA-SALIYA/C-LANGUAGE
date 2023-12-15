#include<stdio.h>

void cube(int a)
{
	printf("cube is :%d",a*a*a);
}
void main()
{
	int a;
	
	printf("Enter a :");
	scanf("%d",&a);
	
	cube(a);
}
