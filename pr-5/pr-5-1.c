#include<stdio.h>

main()
{
	int r,c;
	
	printf("enter row :");
	scanf("%d",&r);
	printf("enter column :");
	scanf("%d",&c);
	
	int a[r][c];
	
	int i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			ptintf("a[%d][%d] ",a[i][j]);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			ptintf("%d",a[i][j]);
			
		}
		printf("\n");
	}
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]<=0)
			{
				printf("%d",a[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	
