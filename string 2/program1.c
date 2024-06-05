#include<stdio.h>
main()
{
	char n[100];
	
	printf("enter any name:=");
	gets(n);
	
	puts(strupr(n));
}