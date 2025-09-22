//Loan application program
/*
NAME:Felix Onyancha Moinde 
REG NO:PA106/G/28821/25
DESCRIPTION:Program to show legibility of applying for a loan
*/

#include <stdio.h>

int main(){
    
    int age;
    float income;
    
    //prompt the user to enter age
    printf("Enter your age: ");
    scanf("%d", &age);
    
    //prompt the user to enter annual income
    printf("\nEnter your annal income: ");
    scanf("%f", &income);
    
    //display legibility if conditions are met
    //atleast ksh.21000 as annual income and a minimum age of 21yrs
    if ( age >= 21 && income >= 21000 ){
    printf("congratulations you qualify for a loan");
    }else{
    printf("unfortunately we are unable to offer a loan at this time");
    }

    return 0;
}