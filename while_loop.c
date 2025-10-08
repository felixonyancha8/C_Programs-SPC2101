/*
NAME:
REG NO:
DATE:
DESCRIPTION:
*/

#include <stdio.h>

int main()
{
	//start; stop; step
	int i = 1;//start
	int sum = 0;
	while(i<=1000)//condition, stop
	{
		printf("%d \t", i);
		i++; //step
		sum +=i;
	}
	printf("\n The sum is %d", sum);
	
	return 0;
}