#include<stdio.h>
void calculateSquare(int n){
	printf("%d",n*n);
}
void main(){
	
	int a;

	printf("enter the first value:-");
	scanf("%d",&a);
	
	calculateSquare(a);
	
}