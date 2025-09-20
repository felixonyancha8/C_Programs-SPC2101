//C_program to find the volume and surface area of a cylinder
/*
NAME: Felix Onyancha Moinde
REG NO: PA106/G/28821/25
DESCRIPTION:
*/

#include <stdio.h>

int main()
{
	float pi = 3.142;
	float radius, height, volume, surface_area;
	
	//prompt the user to enter the radius
	printf("Enter radius: ");
	scanf("%f", &radius);
	
	//prompt the user to enter the height
	printf("\n Enter height: ");
	scanf("%f", &height);
	
	//the volume and the surface_area
	volume = pi * radius * radius * height;
	surface_area = 2 * pi * radius * radius + 2 * pi * radius * height;
	
	//display the volume and the surface_area
	printf("\n volume is %f ", volume);
	printf("\n surface_area is %f ", surface_area);
	
	
	
	return 0;
}



