#include<stdio.h>
main()
{
	for(int x=1;x<=6;x++){
		for(int y=1;y<=x;y++)
		{
			printf("%d ",y);
		}
		printf("\n");
	}
}