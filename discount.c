/*
Name:Felix Onyancha Moinde
Reg No:PA106/G/28821
Date:26th Sep 2025
Description: Program showing the discount per the price
*/

#include <stdio.h>
/*
discount:
amount < 1000 no discount
between 1000 and 5000 : 5% discount
greater than 5000, 10% discount
*/
int main()
{
	float amount, discount, amount_payable;
	printf("Enter purchase amount: ");
	scanf("%f", &amount);
	
	if (amount > 5000){
		discount = 0.1 * amount;
	}
	else if (amount >= 1000 && amount <= 5000){
		discount = 0.05 * amount;
	}
	else if (amount < 1000)
	{
		discount = 0;
	}
	
	amount_payable = amount - discount;
	printf("The amount before the discount is Ksh. %.2f \n", amount);
	printf("The discount is %.2f \n", discount);
	printf("The amount after discount is %.2f \n", amount_payable);
	
	return 0;
}