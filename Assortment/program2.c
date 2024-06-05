#include<stdio.h>
main(){
	int i,j;
	 int a[3][3];
	 int max=0;
	 
	 for(i=0; i<=2; i++){
	 	for(j=0; j<=2; j++){
	 		printf("Enter the value : ");
	 		scanf("%d",&a[i][j]);
	 		
		 }
		 printf("\n");
	 }
	 for(i=0; i<=2; i++){
	 	for(j=0; j<=2; j++){
	 		if(max<a[i][j]){
	 			max=a[i][j];
			 }
		 }
		 printf("\n");
	 }
	 printf("The maximum value in array is : %d",max);	
}