#include<stdio.h>
main()
{
	char a[50];
	
	printf("enter any string:");
	gets(a);
	
	int *leng=strlen(a);
	printf("size of string %d",leng);	
}