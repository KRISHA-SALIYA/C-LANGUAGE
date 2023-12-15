#include<stdio.h>

void div(int a)
{
	if(a%3==0 && a%5==0)
	{
		printf("The given number is divisible by both 3 & 5 ");
	}
	else
	{
		printf("The given number is not divisible by both 3 & 5 ");	
	}
}
void main()
{
	int a;
	
	
	printf("Enter a :");
	scanf("%d",&a);
	
	div(a);
}
