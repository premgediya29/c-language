#include<stdio.h>
main()
{
	int n,a=0;
	printf("entre number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		a=a+1;
	}
	printf("count the total number of digits in a number:%d",a);
}