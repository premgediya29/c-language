#include<stdio.h>

main()
{
	int n;
	int a[n];
	
	printf("Enter the array size = ");
	scanf("%d",&n);
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter the array value = ");
		scanf("%d",&a[i]);
		
	}
	int larg=0;
	
	for(i=0;i<n;i++)
	{
		if(larg<a[i])
		{
			larg=a[i];
		}
	}
	printf("Largest element in the array = %d",larg);
	
	
}