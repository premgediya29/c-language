#include<stdio.h>
main()
{
	int n,a,b,sum=0;
	
	printf("entre number:");
	scanf("%d",&n);

	b=n%10;
	
	while(n>9)
	{
		n=n/10;
	}
	a=n;
	sum=a+b;
	
	printf("sum of a first and the last digit of a number:%d",sum);
}