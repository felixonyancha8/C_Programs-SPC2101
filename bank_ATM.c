/*
NAME:Felix Onyancha Moinde
REG NO:PA106/G/28821/25
DATE:3rd Oct 2025
DESCRIPTION:program on withdrawing money from an ATM
*/

#include <stdio.h>

int main()
{
	int amount;
	int balance = 1000;
	
	printf("WELCOME TO FELIX'S ATM\n");
	printf("_______________________\n");
	
	printf("Welcome FELIX\n");
	printf("Your current balance is %d \n", balance);//initial balance	
	
	
	while(balance>0)
	{
		//prompt the user to withdrawal amount
		printf("Enter withdrawal amount: ");
		scanf("%d", &amount);
		
		balance -= amount;//condition
		printf("your new balance is %d\n", balance);
		
	}
	printf("YOU HAVE NO MORE MONEY");
	
	return 0;
}