#include<stdio.h>

main(){
	char a[100];
	
	printf("Enter any string : ");
	gets(a);
	
	int len = strlen(a);	
	printf("Length of string : %d\n",len);
	
	printf("Uppercase string : ");
	puts(strupr(a));
	
	printf("Lowercase string : ");
	puts(strlwr(a));
	
	printf("Reverse string : ");
	puts(strrev(a));
}