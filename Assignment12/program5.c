#include<stdio.h>
main()
{
	int i=1;
	for(i=1;i<=30;i++)
	{
		if(i % 3 == 0 && i % 5 == 0){
		printf("FizzBuzz\n");
		continue;	
	}
	if(i % 3 == 0)
	{
		printf("Fizz\n");
		continue;
	}
	if(i % 5 == 0)
	{
		printf("Buzz\n");
		continue;
	}
	printf("%d\n",i);
}
}