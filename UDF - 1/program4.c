#include<stdio.h>
void cube(int n){
	printf("%d",n*n*n);
}
void main(){
	
	int a;

	printf("enter the first value:-");
	scanf("%d",&a);
	
	cube(a);
	
}