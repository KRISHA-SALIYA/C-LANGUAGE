#include<stdio.h>

int cube(int n,int a[n][n])

int *ptr[n][n];


for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		ptr[i][j]=&a[i][j]
	}
}
printf("cube of all elements :");
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		printf(%d(*ptr[i][j]) *(*ptr[i][j])*(*ptr[i][j]));
	}
	printf("\n");
}

int main()
{
	int r,c;
	
	printf("Enter row : ");
	scanf("%d",&r);
	printf("Enter column : ");	
	scanf("%d",&c);
	
	int a[r][c],n;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("a[%d][%d]: "i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
			
		}
		printf("\n");
	}
	cube a,b;
	return 0;
	
}
