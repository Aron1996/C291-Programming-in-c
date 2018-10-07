
double average(int num_scores, double sigma);
int sum(int num_scores, int values[]); 
int n;  //set n variable
int main(void) 
{   
    printf( "Debugging Practice 1 - Quiz 3, Q3\n\n");
	printf( "Please enter the number of values to be used: ");
	scanf("%d", &n);
	printf( "Please enter %d values: ",n);
	int values[n];
	for (int i=0; i<n; i++) 
		scanf("%d", &values[i]);
    double sigma = sum(n, values);
	double avg = average(n, sigma);
	printf( "The average of %d numers is: %0.2f\nThe sum is : %0.2f",  n, avg, sigma ); // change the print statement.
    return 0;
}

double average(int num_scores, double sum)
{
	return sum / num_scores;
}

int sum(int num_scores, int values[])  
{
	int sum;
    for (int i =0; i<num_scores; i++)
	    sum += values[i]; 
    return sum;
}

