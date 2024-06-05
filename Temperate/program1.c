#include<stdio.h>
main()
{
	int i;
	char a='a';

	do{
		if(i%3==0 && a=='a')
		{
			printf("%c\n",a);
			i++;
			a++;
//			continue;
	}
	else if(i%3==0){	
		i++;
		a++;
	continue;
	}
	else{
		printf("%c\n",a);	
		i++;
		a++;
	}
}
	while(i<=26);
}