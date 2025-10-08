/*
NAME:Felix Onyancha Moinde
REG NO:PA106/G/28821/25
DATE:8th Oct 2025
DESCRIPTION:Program about a password system that requires-
			the user to enter the correct password. 
*/

#include <stdio.h>

int main()
{
	int password;
	
	do{
		//prompt the user to enter the password
		printf("Enter your password: ");
		scanf("%d", &password);
		//incorrect password
		if(password != 1234){
			printf("Please Try Again!\n");
		}
		
		
			
	}while(password != 1234);
	//executed after input is the correct password, 1234.
	printf("Access Granted\n");
	
	return 0;
}