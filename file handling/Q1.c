#include<stdio.h>

main(){

    FILE *p;
    char data[1000];

    p = fopen("demo.txt","r");

    if(p == NULL){

        printf("Couldn't Open File!!!");

    }
    else{

        printf("File Read\n");
        while(fgets(data,50,p) != NULL){

            printf("%s",data);

        }

    }

    fclose(p);

    p = fopen("write.txt","w");
    
    if(p == NULL){

        printf("File Couldn't Open!!!");

    }
    else{

        printf("\n\nFile Write Successfully\n");
       
        fputs(data,p);
        fclose(p);

    }

}

