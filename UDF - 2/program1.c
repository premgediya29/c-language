#include<stdio.h>
int sum(int *arr, int n){
	int i = 0, sum = 0;

    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}
int main()
{
	int n,i,res;
	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	int array[n];
	
	for (i = 0; i < n; ++i)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &array[i]);
    }

    res = sum(array, n);

    printf("\nThe sum of all array elements is : %d\n", res);

    return 0;

}