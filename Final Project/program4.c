#include<stdio.h>

main(){
	FILE *p;
	p = fopen("data.txt","w");
	
	char data[100];
	
	if(p == NULL){
		printf("File coud not open");
	}
	else{
		printf("Enter text \n");
		gets(data);
		fputs(data,p);
		fclose(p);
		printf("Data enter successsfully");
	}
	
}