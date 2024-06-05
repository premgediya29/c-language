#include<stdio.h>
main(){
	
	int a,b,c,d;
	
	printf("Press 1 for english\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujrati\n\n");
	
	
	
	printf("Select your Language : ");
	scanf("%d",&a);
	
	
	switch(a){
		
		case 1 :
		printf("\nPress 1 for Internet Recharge\n");
		printf("Press 2 for Top-up Recharge\n");
		printf("Press 3 for Special Recharge\n");
		
		printf("Select the number for recharge : ");
		scanf("%d",&b);
		
		 switch(b){
			case 1:printf("you have done your interner recharge");
			break;
			case 2:printf("you have done your top up recharge");				
			break;
			case 3:printf("you have done your special recharge");
			break;
			default :printf("enter valid number");
		}
		break;
		case 2 :
		printf("\nInternet Recharge ke liye 1 dabaiye\n");
		printf("Top-up Recharge ke liye 2 dabaiye\n");
		printf("Special Recharge ke liye 3 dabaiye\n");
		
		printf("recharge karne ke liye number dabaiye  : ");
		scanf("%d",&c);
		
		 switch(c){
			case 1:printf("internet recharge sahi se ho gaya hai");
			break;
			case 2:printf("top up recharge sahi se ho gaya hai");				
			break;
			case 3:printf("special recharge sahi se ho gaya hai");
			break;
			default :printf("krupiya sahi number dale");
	}
	break;
		case 3 :
		printf("\nInternet Recharge mate 1 dabavo\n");
		printf("Top-up Recharge mate 2 dabavo\n");
		printf("Special Recharge mate 3 dabavo\n");
		
		printf("recharge karva mate number dabavo  : ");
		scanf("%d",&d);
		
		 switch(d){
			case 1:printf("internet recharge safalta purvak thai gayu chhe");
			break;
			case 2:printf("Top up recharge safalta purvak thai gayu chhe");				
			break;
			case 3:printf("special recharge safalta purvak thai gayu chhe");
			break;
			default :printf("krupa kari sacho number nakho");
	}
	break;
		deafult:printf("enter valid language");		
	}	
}
