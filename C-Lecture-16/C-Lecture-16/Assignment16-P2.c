//Q.2 Write a Program to convert the given string in lowercase without using any string function.
#include<stdio.h>
main()
{
	char str[]="HELLO WORLD";
	int i;
	for(i = 0 ; str[i]!=NULL ; i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i]+=32;
		}
	}
	printf("%s",str);
}
