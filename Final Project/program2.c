#include<stdio.h>

main(){
	
	int a[3][3],i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	int min = a[0][0],max=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			if(a[i][j] < min){
				min = a[i][j];
			}
		}
		for(j=0;j<3;j++){
			if(a[i][j] > max){
				max = a[i][j];
			}
		}
	}
	printf("Minimum value is : %d\n",min);
	printf("Maximum value is : %d",max);
}