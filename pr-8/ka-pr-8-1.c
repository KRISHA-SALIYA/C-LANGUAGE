#include<stdio.h>

 int main()
 {
 	char str[20];
 	char *ptr=str;
 	int lenght=0;
 	
 	printf("Enter any string :");
 	scanf("%[^\n]",str);
 	
 	while(*ptr !='\0')
 	{
 		lenght++;
 		ptr++;
	 }
	 printf("The lenght of the stringis : %d\n",lenght);
 }
