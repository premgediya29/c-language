#include<stdio.h>
main()
{
	int a=9,b=2,c=120;
	
	if(a>b)
	{
		if(a>c){
			printf("a is min %d",a);
		}
		else
		{
			printf("c is min %d",c);
		}
	}
	else{
		if(b>c){
			printf("b is min %d",b);
		}
		else
		{
			printf("c is min %d",c);
		}
	}
}