#include<stdio.h>
main()
{
	char a[50],b[50];
	
	puts("enter string1:=");
	gets(a);
	
	puts("enter string2:=");
	gets(b);
	
	if(strcmp(a,b)==0)
	{
		puts("they are equal");
	}
	else
	{
		puts("they are not equal");
	}
}