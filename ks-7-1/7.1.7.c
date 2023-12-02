#include<stdio.h>

main()
{
	int o,p;
	
     for(o='A';o<='E';o++)
	{
		for(p=o;p>='A';p--)
		{
			printf("%c",p);
		}
		printf("\n");
	}
}
