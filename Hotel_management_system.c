/*
NAME:Felix Onyancha Moinde
REG NO:PA106/G/28821/25
DATE:28th Oct 2025
DESCRIPTION:A program on a hotel management system with a revenue tracker and
			room occupancy management
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	//1D Array--Weekly Revenue Tracker
	float revenue[7], avarage;
	float total = 0;
	int i, j;

	printf("Enter the daily revenue for 7 days:\n");

	//for loop
	for(i = 0; i < 7; i++) {
	   	printf("Day %d: ", i + 1);
		scanf("%f", &revenue[i]);
		total += revenue[i];
	}


	//Avarage Revenue
	avarage = total / 7;

	printf("Total weekly revenue: %.2f\n", total);
	printf("Average daily revenue: %.2f\n", avarage);
  
    //2D Array--Room Occupancy(one branch)
	int occupancy[5][10];
	int occupied, vacant;

	printf("Enter occupancy data for 5 floors with 10 rooms each (1 for occupied, 0 for vacant):\n");

	for(i = 0; i < 5; i++) {
  	printf("\nFloor %d:\n", i + 1);
  	
  	occupied = 0;
  	vacant = 0;
  	
  	for(j = 0; j < 10; j++) {
		  occupancy[i][j] = rand()%2;//randon input os 1 and 0
		  if(occupancy[i][j] == 1)
		  	occupied++;
		  else
		  	vacant++;
	  }
	  printf("floor %d--> occupied: %d, vacant: %d\n   ", i + 1, occupied, vacant);
  	
	}

	//3D Array--Multiple branches
    int chain[3][5][10];
    int totalOccupied = 0;
    int a, b, c;

    printf("--- Multi-Branch Room Occupancy ---\n");
    printf("(1 = Occupied, 0 = Vacant)\n\n");

    for(a = 0; a < 3; a++) {
        printf("Branch %d:\n", a + 1);
        for(b = 0; b < 5; b++) {
            int floorOccupied = 0;
            for(c = 0; c < 10; c++) {
                chain[a][b][c] = rand() % 2;  // Random 0 or 1
                if(chain[a][b][c] == 1) {
                    totalOccupied++;
                    floorOccupied++;
                }
            }
            printf(" Floor %d Occupied Rooms: %d\n", b + 1, floorOccupied);
        }
        printf("\n");
    }

    printf("--- Final Report ---\n");
    printf("Occupied Rooms Across All Branches: %d\n", totalOccupied);
    printf("Vacant Rooms Across All Branches: %d\n",(3 * 5 * 10 - totalOccupied)); 
  

  return 0;
}