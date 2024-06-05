#include<stdio.h>
main(){
	char str1[50],str2[50];
	
	
	puts("Enter string 1 : ");
	gets(str1);
	
	puts("Enter streing 2 : ");
	gets(str2);
	
	if(strcmp(str1,str2)==0){
		printf("Strings Are equal");
	}else{
			printf("Strings Are not equal");
	}
	
	
}