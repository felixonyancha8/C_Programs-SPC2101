/*
NAME:Felix Onyancha Moinde
REG NO:PA106/G/28821/25
DATE:8th Oct 2025
DESCRIPTION:Program to display number 1-1000 and their sum
*/

#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0;
	
	do{
		printf("%d \t", i);
		i++;//condition
		sum +=i;
	}while(i <= 1000);//end
	
	printf("\n The sum is %d", sum);
	
	return 0;
}