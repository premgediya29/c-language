#include<stdio.h>
main()
{
	int i=1,n;
	
	printf("Enter any value:=");
	scanf("%d",&n);
	
	while(n >= i){
		printf("\n%d",n);
		n--;
	}
}