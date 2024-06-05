#include<stdio.h>
main()
{
char s1[20]; 
char s2[20]; 
char s3[100];
printf("Enter the first string : ");
scanf("%s", s1);
printf("Enter the second string : ");
scanf("%s", s2);

strcpy(s3,strcat(s1 ,s2));
puts(s3);
}