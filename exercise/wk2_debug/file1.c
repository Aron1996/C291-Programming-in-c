/*Debugging quiz - File No: 1 */
/* The program should print the sum of all even numbers between 1 to 100 */

#include<stdio.h>

int main(void){
	int limit = 100;
        int sum =0 ;
        int counter = 0;
	for(counter =2; counter <= limit; counter += 2){
		sum = sum+counter;}
	printf("Sum = %d\n", sum);
	return 0;
}
