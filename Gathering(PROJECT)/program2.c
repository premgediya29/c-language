#include<stdio.h>
float  calculateArea(int l,int b){
	float area=l*b;
	
	return (area);
}
main(){
	int l,b;
	printf("Enter Length : ");
	scanf("%d",&l);
	
	printf("Enter Width : ");
	scanf("%d",&b);
	
	float area = calculateArea(l,b);
	
	printf("%f",area);
}