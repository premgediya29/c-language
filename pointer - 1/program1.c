#include<stdio.h>

int squareOfElements(int n, int m[]){

    printf("Square Of Arrays Are : \n\n");

    for(int i = 0; i < n; i++){

        printf("%d\n",m[i]*m[i]);

    }

}


int main(){

    int x;

    printf("Enter The Array's Size : ");
    scanf("%d",&x);

    int a[x];

    printf("\nEnter Array's Elements : \n");
    for(int i = 0; i < x; i++){

        scanf("%d",&a[i]);

    }

    squareOfElements(x,a);

}