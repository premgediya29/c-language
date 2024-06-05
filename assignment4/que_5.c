#include <stdio.h>
main()
{
	int width,height,area;
	
	printf("enter width is:");
	scanf("%d",&width);

	printf("enter height is:");
	scanf("%d",&height);
	
	area=width*height;
	printf("Area of the rectangle=%d",area);
}