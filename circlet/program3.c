#include<stdio.h>
main()
{
	int i,n,s,j;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(s=4;s>=i;s--)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}