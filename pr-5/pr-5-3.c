#include<stdio.h>

main()
{
	int r,c;
	
	printf("enter row :");
	scanf("%d",&r);
	printf("enter column :");
	scanf("%d",&c);
	
	printf("enter array elements :\n");
	
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
