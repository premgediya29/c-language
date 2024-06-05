#include<stdio.h>
main()
{
	int Celsius,Fahrenheit;
	
	printf("Enter Celsius:=");
	scanf("%d",&Celsius);
	
	Fahrenheit = (Celsius * 9/5) + 32;
	
	printf("Celsius Into Fahrenheit Is:= %d",Fahrenheit);
}