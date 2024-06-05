#include<stdio.h>
main()
{
	char a[50],rev[50];
	
	puts("enter string:=");
	gets(a);
	
	puts(strcpy(rev,strrev(a)));
	
	if(strcpy(a,rev))
	{
		puts("palidrome");
	}
	else
	{
		puts("not palidrome");
	}
}