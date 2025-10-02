/*
NAME:Felix Onyancha Moinde
REG NO:PA106/G/28821/25
DATE:1st Oct 2025
DESCRIPTION:Program showing the eligibility of an exam
*/

#include <stdio.h>

int main()
{
	int attendance, average_marks;
	//prompt the user to enter attendance
	printf("Enter student's attendance: ");
	scanf("%d", &attendance);
	//prompt the user to enter the average marks
	printf("\n Enter student's average marks: ");
	scanf("%d", &average_marks);
	
	if (attendance >= 75 && average_marks >= 40){
		printf("\n You are eligible");
	}
	else
	{
		printf("\n Not eligible");
	}
	
	
	return 0;
}