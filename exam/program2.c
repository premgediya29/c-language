#include<stdio.h>
main()
{
	int HRA,DA,TA,BS,TOTAL;

	printf("Enter base salary:=");
	scanf("%d",&BS);	
	
	printf("Enter HRA:=");
	scanf("%d",&HRA);
	
	printf("Enter DA:=");
	scanf("%d",&DA);
	
	printf("Enter TA:=");
	scanf("%d",&TA);
	
	TOTAL=HRA+DA+TA+BS;
	
	printf("total:=%d",TOTAL);
}