#include<stdio.h>

main(){

    int x,y,temp;

    printf("Enter The Value Of x : ");
    scanf("%d",&x);

    printf("\nEnter The Value Of y : ");
    scanf("%d",&y);

    int *a = &x;
    int *b = &y;


    printf("%u \t %d\n",a , *a);
    printf("%u \t %d\n",b,*b);

    int *t = &temp;

    *t = *a;
    *a = *b;
    *b = *t;

    printf("%d\n",*a);
    printf("%d\n",*b);

}