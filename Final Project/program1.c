#include<stdio.h>
main()
{
	int a,b;
	char operator;
	
	printf("enter operator:");
	scanf("%c",&operator);
	
	printf("enter value of a:");
	scanf("%d",&a);
	
	printf("enter value of b:");
	scanf("%d",&b);

		

	switch(operator){
		case '+':
			printf("value print\n %d",a+b);
			break;
		case '-':
			printf("value print\n %d",a-b);
			break;
		case '*':
			printf("value print\n %d",a*b);
			break;
		case '/':
			printf("value print\n %d",a/b);
			break;
		default:
			printf("invalid");
	}
}