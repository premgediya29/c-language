#include<stdio.h>
main(){
	
	int n;
	int i;
	int sum = 0;
	
	
	printf("Enter The Size of Array :");
	scanf("%d",&n);
	
	int arr[n];
	
	
	

	for(i = 0; i <= n; i++){
		
		printf("Enter Array Elements : ");
		
		scanf("%d",&arr[i]);
		
	}
	
	for(i = 0; i <= n; i++){
		
			sum += arr[i];
			
	}
	
	
	
	printf("Sum of Elements in Array : %d",sum);
	
	
}