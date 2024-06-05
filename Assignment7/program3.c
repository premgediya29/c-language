#include<stdio.h>
main(){
	int age;
	
	printf("Enter your age:=");
	scanf("%d",&age);
	
	if(age == 18)
	{
		printf("they can also vote.");
	}
	else if(age > 18)
	{
		printf("they can vote.");
	}
	else
	{
		printf("they cannot vote.");
	}
	
}