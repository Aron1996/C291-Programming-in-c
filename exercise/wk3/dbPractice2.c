#include<stdio.h>
void display(int Matrix1[][5], int size)
int main(void) 
{   
    int size=5, Matrix1[size][size];
	for (int i=0; i<size-1; i++) 
 	    for (int j=0; j<size-1; j++) 
            Matrix1[i][j]=i+j;
	display(Matrix1, size);
    return 0;
}

void display(int Matrix1[][5], int size)
{   
    size--;
	for (int i=0; i<size; i++) {
 	    for (int j=0; j<size; j++) 
            printf("%d ,", Matrix1[i][j]);
        printf("\n");
        }
    return;
}
