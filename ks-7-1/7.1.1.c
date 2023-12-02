#include<stdio.h>

main()
{
	int i,n;
	
	for(i=1;i<=5;i++)
	{
		for(n=i;n>=1;n--)
		{
			printf("%d",n);
		}
		printf("\n");
	}
}
