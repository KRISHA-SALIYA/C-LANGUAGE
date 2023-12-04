#include<stdio.h>

main()
{
	int size;
	printf("enter array saiz : ");
	scanf("%d",&size);
	printf("enter element saiz :\n");
	
	int i,a[size],sum=0;
	
	for(i=0;i<size;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&i);
	}
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	printf("average of an array : %d",sum/size);
}
