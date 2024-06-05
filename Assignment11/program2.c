#include<stdio.h>
main(){

	int num = 1;	
	int a = 1;
	 do{
		printf("%d\n", num);
		a*=num;
		num++;	
	 }while (num <= 10);
	printf("\nprint product of all numbers:%d",a);
}