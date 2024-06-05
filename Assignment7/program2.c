#include<stdio.h>
main(){
	int a,b;
	
	printf("Enter value of a:=");
	scanf("%d",&a);
	
	printf("Enter value of b=");
	scanf("%d",&b);
	
	if(a < b)
	{
		printf("a is minimum");
	}
	else
	{
		printf("b is minimum");
	}
}