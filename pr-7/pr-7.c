#include<stdio.h>

void input(int a,int b)
{
	printf("enter a ");
	scanf("%d",&a);
	printf("enter b ");
	scanf("%d",&b);
	
}
int sum(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}
void cinput()
{
	int c;
	printf("enter your choice ");
	scanf("%d",&c);
}
int main()
{
	int a,b,c;
	do
	{
		
	printf("Enter :a \n");
	scanf("%d",&a);
	printf("Enter :b \n");
	scanf("%d",&b);
	
	printf("prees 1 for +\n");
	printf("prees 2 for -\n");
	printf("prees 3 for *\n");
	printf("prees 4 for /\n");
	printf("prees 5 for %%\n");
	
	
	printf("enter your choice :");
	scanf("%d",&c);

	
	switch(c)
	{
		
		case 1:
		printf(" sum of %d and %d : %d\n",a,b,a+b );
		break;
		
		case 2:
		printf(" sub of %d and %d : %d\n",a,b,a-b);
		break;
		
		case 3:
		printf(" mod of %d and %d : %d\n",a,b,a*b);
		break;
		
		case 4:
		printf(" div of %d and %d : %d\n",a,b,a/b);
		break;
		
		case 5:
		printf(" mul of %d and %d : %d\n",a,b,a%b);
		break;
		
		case 0:
			
			
		defult :
			printf("invalid");
			break;
	}
	
	}while(c!=0);
	
}

