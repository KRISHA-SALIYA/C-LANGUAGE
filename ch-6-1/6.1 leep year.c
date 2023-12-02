#include<stdio.h>

main()
{
	int a,n;
	printf("enter year 1 : ");
	scanf("%d",&a);
	printf("enter year 2 : ");
	scanf("%d",&n);
	
	while(a<=n)
	{
		if(a%4==0)
		{
			printf("%d \t ",a);
		}
		a++;
	}
	
	
}
