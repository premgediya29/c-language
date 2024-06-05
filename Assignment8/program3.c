#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter Frist Number : \n");
	scanf("%d",&a);
	printf("Enter Second Number : \n");
	scanf("%d",&b);
	printf("Enter Third Number : \n");
	scanf("%d",&c);
	printf("Enter Forth Number : \n");
	scanf("%d",&d);
	if(a>b)
	{
		if(a<c)
		{
			if(c<d)
			{
				printf("%d Is Max",d);
			}
			else
			{
				printf("%d Is Max",c);	
			}
		}
		else
		{
			printf("%d Is Max",a);
		}
	}
	else
	{
		if(b<c)
		{
			if(c<d)
			{
				printf("%d Is Max",d);	
			}
			else
			{
				printf("%d Is Max",c);
			}	
		}
		else
		{
			printf("%d Is Max",b);	
		}
	}
}