// Yaokun Zhang, yaokzhan, assignment4
#include <stdio.h>
#include <stdlib.h>


#define ROW 5
#define COLUMN 10
#define CARDS 52
char ans;
// prototypes


int main(void)
{
   // initialize suit array  
   const char *topics[ROW] = {"Health Care", "Social Security", "Trade Deficit", "Immigration", "Proverty"};
   
   // initialize survey array
   unsigned int survey[ROW][COLUMN] = { 0 };
   
   // initialize rate array                   
   const int rate[COLUMN] =
      {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};        


   for(int i = 0; i < 5; i++){
	   printf("%s\n", topics[i]);
	} 
	
	printf("Enter \"y\" to continue rating, else to break\n");
	scanf("%c", &ans);
	while(ans == 'y'){
		printf("Please enter the rate for Health Care: \n");
		int rate;
		scanf("%d", &rate);
		survey[0][rate-1] = rate;
		
		printf("Please enter the rate for Social Security: \n");
		scanf("%d", &rate);
		survey[1][rate-1] = rate;
		
		printf("Please enter the rate for Trade Deficit: \n");
		scanf("%d", &rate);
		survey[2][rate-1] = rate;
		
		printf("Please enter the rate for Immigration: \n");
		scanf("%d", &rate);
		survey[3][rate-1] = rate;
		
		printf("Please enter the rate for Proverty: \n");
		scanf("%d", &rate);
		survey[4][rate-1] = rate;
		
		printf("Enter \"y\" to continue rating, else to break\n");
		scanf("%c", &ans);
		scanf("%c", &ans);
	}
	printf("\t\t");
	for(int i = 1; i < COLUMN+1; i++){
		printf("\t%d", i);
	}
	printf("\n");
	for(int i = 0; i < ROW; i++){
		printf("\t\t");
		for(int j = 0; j < COLUMN; j++){
			printf("%d\t", survey[i][j]);
		}
	}
	printf("\n");
}


