/*Debugging quiz - File No: 2 */
/* The program should correctly print the stored variable values */

#include<stdio.h>

int main(void){
	int defaul = 3.14;
        int b2 = 9;
	char alphabet = 'd';
	printf("%Lf\n", &defaul);
	printf("%u\n", &b2);
	printf("The ASCII value of character 'd' is : %d\n",&alphabet);
	return 0;
}
