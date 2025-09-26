/*
Name:Felix Onyancha Moinde
Reg No:PA106/G/28821/25
Date: 26th Sep 2025
Description:Program to show the elegibility of a voter
*/

#include <stdio.h>

int main(){
	//variable declaration
	int age;
	//prompt the user to enter the age 
	printf("Enter your age: \t");//\t= tab key(4 spaces
	scanf("%d", &age);
	
	//else statement
	if (age >= 18){
		printf("You are eligible to vote.");

	}
    else//no condition
	{
		printf("you are not eligible to vote.");
	}
		
	return 0;
}