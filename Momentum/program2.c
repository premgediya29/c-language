#include<stdio.h>
main()
{
	int n;
	
	printf("choice of coffee:");
	scanf("%d",&n);
	
	switch(n){
		case 1:
			printf("Espresso - $2.50");
			break;
		case 2:
			printf("Latte - $3.00");
			break;
		case 3:
			printf("Cappuccino - $3.50");
			break;
		case 4:
			printf("Americano - $2.75");
			break;
		default:
			printf("Invalid choice");
	}
}