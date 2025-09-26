/*
Name:Felix Onyancha Moinde 
Reg No:PA106/G/28821/25
Date:26th Sep 2025
Description: Program on shipping charges
*/

#include <stdio.h>
/*
E-commerce Shipping Charges
"    Write a Program that calculates shipping charges:
"    Orders below 500 KES = 100 KES shipping fee.
"    Orders 500-2000 KES = 50 KES shipping fee.
"    '''''  above 2000 KES = free shipping.
"    additionally if the item is fragile, add 50KES handling fee.
*/
int main(){
	
	int order_amount, shipping_fee;
	char fragile;
	
	printf("Is th item fragile? (Y/N): ");
	scanf("%c", &fragile);
	
	printf("Enter order_amount: ");
	scanf("%d", &order_amount);
	
	if (order_amount < 500){
		shipping_fee = 100;
	}
	else if (order_amount >=500 && order_amount <= 2000){
		shipping_fee = 50;
	}
	else if (order_amount > 2000){
		shipping_fee = 0;
	}
	
	if (fragile == 'y' || fragile == 'Y'){
		shipping_fee = shipping_fee + 50;
	}
	
	printf("The total shipping fee is Ksh. %d", shipping_fee);
	
	return 0;
}
