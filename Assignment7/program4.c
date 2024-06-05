#include<stdio.h>
main(){
	int number;
	
	printf("Enter your age:=");
	scanf("%d",&number);
	
	if(number>0)
	{
		printf("Positive.");
	}
	else if(number<0)
	{
		printf("Negative.");
	}
	else
	{
		printf("Neutral.");
	}
	
}