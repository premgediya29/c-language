#include<stdio.h>
main()
{
	
    int a = 0; 
    int n = 1; 

    printf("The first 5 numbers divisible by 8 are:\n");

    while (1) { 
        if (n % 8 == 0) { 
            printf("%d\n", n);
            a++; 
        }
        if(a==5){
        	break;
		}
        n++; 
    }
}