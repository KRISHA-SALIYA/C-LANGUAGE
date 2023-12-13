#include<stdio.h>

main()
{
	char name[10];
	char name[10];
	
	printf("Enter any string  :");
	scanf("%s",&n);
	
	int len=0,pal=0,n=20;
	
	for(int i=len;name[i] !='\0';i++)
	{
		len++;
	}
	for(int i=len-1;i>=0;i--)
	{
		name1[n++]=name[i]
	}
	for(int i=0;name[i] !='\0';i++)
	{
		if(name[i]==name1[i])
		{
			pal++;
		}
	}
	if(pal==len)
	{
		printf("string is palindrom");
	}
	else
	{
		printf("string is not palindrom");
	}
}
