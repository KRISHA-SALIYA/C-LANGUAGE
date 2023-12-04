#include<stdio.h>

main()
{
	int n;	
	printf("enter array n : ");
	scanf("%d",&n);
	 
	int a[n],b[n],c[n],i;
	printf("array of A :\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);	
	} 
	printf("array B : ,\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&b[i]);	
	} 
	printf("array c : ,\n");
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	} 
	for(i=0;i<n;i++)
	{
		printf("c[%d]:%d\n",i,c[i]);
	}
}
