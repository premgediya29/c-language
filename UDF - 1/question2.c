#include<stdio.h>
void printtable(){
	int i;
	for(i=1;i<=10;i++){
		printf("5 * %d = %d\n",i,i*5);
	}
}
main(){
	printtable();
}