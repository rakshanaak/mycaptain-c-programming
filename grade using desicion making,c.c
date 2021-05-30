#include <stdio.h>
int main(void)
{
int num;
printf("Enter your mark ");
scanf("%d",&num);
printf(" You entered %d", num); 

	if(num >=85 && num <=100){
	printf(" You got A grade"); 
		}
	else if ( num >=70 && num <=84){ 
		printf(" You got B grade");
		}
	else if ( num >=55 & &num <=69){
		printf(" You got C grade");
		}
	else if ( num >=40 && num <=54){
		printf(" You got D grade");
	    }
	else if ( num < 40){
		printf(" You Failed in this exam");
		}
return 0;
}