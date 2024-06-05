#include<stdio.h>
main(){
	int a=5,b=3,temp;
	
	temp=a;
	a=b;
	b=temp;
	
	printf("%d\n",a);
	printf("%d\n",b);
}