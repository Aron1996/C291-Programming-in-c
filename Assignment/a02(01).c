//Assignment2, yaokun zhang, 01/23/2017
#include<stdio.h>

int main(void) {
    char input;
    printf("Enter the first letter of shape you want to creat (b/o/a/d/q): (Q to Quit) \n");
    while(EOF!=(input = getchar())){
	if(input == 'Q' || input == 'q'){
	break;}
        else if(input == 'b'){
            printf("*********\n");
	    printf("*       *\n");
	    printf("*       *\n");
	    printf("*       *\n");
	    printf("*       *\n");
	    printf("*       *\n");
 	    printf("*       *\n");
	    printf("*       *\n");
	    printf("*********\n");
        } 
        else if(input  == 'o') {
            printf("   ***\n");
	    printf(" *     *\n");
	    printf("*       *\n");
	    printf("*       *\n");
	    printf("*       *\n");
	    printf("*       *\n");
	    printf("*       *\n");
	    printf(" *     *\n");
	    printf("   ***\n");
        }
	else if(input == 'a'){
	    printf("  *\n");
	    printf(" ***\n");
	    printf("*****\n");
	    printf("  *\n");
            printf("  *\n");
	    printf("  *\n");
	    printf("  *\n");
	    printf("  *\n");
	    printf("  *\n");
        }
	else if(input == 'd'){
	    printf("     *\n");
	    printf("    * *\n");
	    printf("   *   *\n");
	    printf("  *     *\n");
	    printf(" *       *\n");
	    printf("  *     *\n");
	    printf("   *   *\n");
	    printf("    * *\n");
	    printf("     *\n");
        }
	else{
	    printf("Enter the first letter of shape you want to creat (b/o/a/d/q) : (Q to Quit) \n"); 
        }}  
       printf("Quit the menu.\n");
       return 0;
}
