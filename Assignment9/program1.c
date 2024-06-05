#include<stdio.h>
main()
{
	int a,b;
	
	printf("enter value of a:");
	scanf("%d",&a);
	
	printf("enter value of b:");
	scanf("%d",&b);
	
	(a > b) ? printf("a is max") : printf("b is max");
}