#include<stdio.h>
main()
{
	int p,r,n;
	for(p=1;p<=5;p++){
		for(r=5;r>=p;r--){
			printf(" ");
		}
		for(n=1;n<=p;n++){
			printf("%d ",r);
		}
		printf("\n");
	}
}