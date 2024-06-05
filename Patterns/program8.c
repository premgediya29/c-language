#include<stdio.h>
main()
{
	int i,c,s;
	for(i=1;i<=5;i++){
			for(s=4;s>=i;s--){
				printf("_");
			}
			for(c=1;c<=i;c++){
				printf("%d",c);
			}
			printf("\n");
	}

}