#include<stdio.h>
int calculateSumOfSquares(int n){
	int square;
	int sum=0;
	int i;
	for(i=1;i<=n;i++){
		if(i%2==0){
			square=i*i;
			sum+=square;
		}
		
	}
	return (sum);
}
main(){
	int n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	int sum = calculateSumOfSquares(n);
	
	printf("%d",sum);
}