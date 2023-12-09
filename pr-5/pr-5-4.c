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
	int row,col,rsum=0,csum=o;
	printf("enter row :");
	scanf("%d",&r);
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==row)
			{
				printf("row :%d\n",a[i][j])
			}
			
		}
		printf("\n");
	}
	
	printf("enter col :");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==row)
			{
				printf("row :%d\n",a[i][j])
			}
			
		}
		
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==row)
			{
				rsum+=a[i][j];
			}
			
		}
		
	}
	printf("row sum :%d",rsum);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==col)
			{
				csum+=a[i][j];
				
			}
			
		}
		
	}
	printf("column sum :%d",csum);
}
