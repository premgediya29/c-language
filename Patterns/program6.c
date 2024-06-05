#include<stdio.h>
main()
{
	for(int x=5;x>=1;x--){
		for(int y=5;y>=x;y--)
		{
			printf("%d ",y);
		}
		printf("\n");
	}
}