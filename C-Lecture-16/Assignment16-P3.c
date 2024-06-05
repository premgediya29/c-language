//Q.3 Write a Program to convert the given string in toggle case without using any string function.
#include<stdio.h>
main()
{
	char str[]="HelLo worLD";
	int i;
	for(i = 0 ; str[i]!=NULL ; i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i]+=32;
		}
		else if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i]-=32;
		}
	}
	printf("%s",str);
}
