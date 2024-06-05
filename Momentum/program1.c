#include<stdio.h>
main(){
	int length,width;
	
	printf("ENTER LENGTH:");
	scanf("%d",&lenth);
	
	printf("ENTER WIDTH:");
	scanf("%d",&width);
	
	if(length==width)
	{
		printf("square");
	}
	else if(width<0){
		printf("invalid choice");
	}
	else if(length<0){
		printf("invalid choice");
	}
	else{
		printf("rectangle");
	}
}