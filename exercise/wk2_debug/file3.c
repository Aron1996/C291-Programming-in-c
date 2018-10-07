/*Debugging quiz - File No: 3 */
/* The program should give out the appropriate message, given the grade as input */

#include<stdio.h>

int main(void) {
        int input; 
        printf("Enter the grade (A/B/C/D/F): (Q to Quit) \n");
	while((input = getchar()) != 'Q'){
		if ((input == 'F') || (input == 'D')){
			printf("You have not passed the course \n");
		}
		else if((input == 'A') || (input == 'B')|| (input == 'C')){
			printf("You have passed!\n");
		}}
        printf("Quit the menu.\n");
	return 0;
}
