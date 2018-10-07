/* Instructions:
 *
 *1. Following on from what you have learnt in class today, write a program to return the grade associated with a range of marks.

  2. The range of marks and the associated grades are as follows:
     a. 91-100 = A
     b. 81-90 = B
     c. 71-80 = C
     d. less than or equal to 70 is a fail grade and should be given an F
     e. greater than 100 is invalid and your code should print "Invalid"
  
  3. Use the skeleton code provided below to create a new function "printGrade" with its appropriate 
     data type for input of marks. For example, printGrade(<data type> marks). 
  
  4. Use print statements in your function to display the grade. For example, if the input marks is 77, the output should read: 

	"Your grade is : C"

  5. Please adhere to standard C syntax conventions and use comments to explain your code. Failure to do so will result in a penalty.
 *
 *
 * */


#include<stdio.h>

int main(void){

	char ch;
	int marks;
	do{
		printf("Enter marks:");
		scanf("%d", &marks);
		printGrade(marks);
		printf("\nDo you want to continue? (Y/N)");
		scanf(" %c", &ch); //do not modify this.
	} while (ch == 'y' || ch == 'Y');
	return 0;
}

int printGrade(int grade){   // create function printGrade
	if (grade < 71){
		printf("Your grade is : F");
	}
	else if (grade >= 71 && grade <= 80){  // get cond between 71 and 80
		printf("Your grade is : C");
	}
	else if (grade > 80 && grade <= 90){   // get cond between 81 and 90
		printf("Your grade is : B");
	}
	else if (grade > 90 && grade <= 100){  // get cond between 91 and 100
		printf("Your grade is : A");
	}
	else{								   // get cond beyongd 100
		printf("Invalid");
	}
	return 0;
}








