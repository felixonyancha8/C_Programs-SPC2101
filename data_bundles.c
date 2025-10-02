/*
NAME:Felix Onyancha Moinde
REG NO:PA106/G/28821/25
DATE:1st Oct 2025
DESCRIPTION:C_Program for a local  service provider offering different data bundles
*/

#include <stdio.h>

int main()
{
	int choice;
	//display the offered data bundles
	printf("Select data bundle: \n");
	printf("1. 100MB @ 50 KES \n");
	printf("2. 500MB @ 200 KES\n");
	printf("3. 1GB   @ 350 KES \n");
	printf("4. 2GB   @ 600 KES \n");
	//prompt the user to enter the desired choice of bundles
	printf("Enter your choice (1-4): ");
	scanf("%d", &choice);
	
	//use a switch statement
	switch(choice)
	{
	case 1:
		printf("you selected 100MB @ 50 KES");
		break;
	case 2:
		printf("you selected 500MB @ 200 KES");
		break;
	case 3:
		printf("you selected 1GB   @ 350 KES");
		break;
	case 4:
		printf("you selected 2GB   @ 600 KES");
		break;
	default:
		printf("Invalid choice");
	}
	
	return 0;
}