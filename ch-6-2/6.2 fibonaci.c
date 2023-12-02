#include<stdio.h>

main()
{
	int i,a=0,b=1,c,n;
	
	printf("\n enter a number ");
	scanf("%d",&n);
	printf("\n %d %d ",a,b);
	
	for (i=0;i<=n;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}
