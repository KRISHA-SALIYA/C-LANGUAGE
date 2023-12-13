#include<stdio.h>

main()
{
	char n[20];
	
	printf("Enter any string  :");
	scanf("%s",&n);
	
	int i,j;
	
	for(i=0;i<n;i++)
	{
		int a=1;
		for( j=i+1;j<n;j++)
		{
			if(n[i]==n[j])
			{
				a++;
			}
		}
		printf("%s : %d\n",n[i]a);
	}
}
