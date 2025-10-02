/*
NAME:Felix Onyancha Moinde
REG NO:PA106/G/28821/25
DATE:1st Oct 2025
DESCRIPTION:Program for the charges on no. of water units used
*/

#include <stdio.h>

int main()
{
	int units;
	float charges;
	//prompt the user to enter number of water units consumed
	printf("Enter the number of water units consumed: ");
	scanf("%d", &units);
	
	if (units >= 0 && units <= 30 ){
		charges = 20;
	}
	else if(units >= 31 && units <= 60){
		charges = 25;
	}
	else if(units > 60){
		charges = 30;
	}
	
	printf("\nTotal water bill: %.2f KES", charges);
	
	return 0;
}