#include<stdio.h>
main(){
	int a=20;
	int *p1;
	p1=&a;
	
	int **p2;
	p2=&p1;
	
	int ***p3;
	p3=&p2;
	
	printf("%u %d\n",p1,*p1);
	printf("%u %u %d\n",p1,p2,**p2);
	printf("%u %u %u %d\n",p1,p2,p3,***p3);
}
