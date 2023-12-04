#include<stdio.h>

main()
{
	int saiz;
	printf("enter array saiz : ");
	scanf("%d",&saiz);
	printf("enter element saiz :\n");
	
	int i,a[saiz];
	for(i=0;i<saiz;i++) 
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("lenth of an array : %d",saiz);
	
}



