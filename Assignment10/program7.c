#include<stdio.h>
main()
{
	int i=5,sum=0;

	while(i >= 1){
		sum=sum+i;
		i--;
	}
	printf("sum of 1 to 5 :=%d",sum);
}