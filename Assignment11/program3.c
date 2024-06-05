#include<stdio.h> 
 int main() 
 { 
   int i=1,n,mul=1;
   printf("enter number:");
   scanf("%d",&n);
   
   do{
   	mul=n*i;
   	i++;
   	printf("\n%d",mul);
   	
   }while(i<=10);
 } 