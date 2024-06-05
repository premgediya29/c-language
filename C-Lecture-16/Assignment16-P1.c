//Q.1 Write a Program to convert the given string in uppercase without using any string function.
#include<stdio.h>
main()
{
	char str[]="hello world";
	int i;
	for(i = 0 ; str[i]!=NULL ; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i]-=32;
		}
	}
	printf("%s",str);
}
