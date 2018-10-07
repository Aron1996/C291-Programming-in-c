//Assignment02, Yaokun Zhang,01/23/17
#include<stdio.h>

int main(void) {
    int num_lines;
    int num_asterisk;
    int num;
    int lines;
    int i;
    printf("How many lines to display?\n");
    scanf("%d", &num_lines);
    printf("How many asterisk per line?\n");
    scanf("%d", &num_asterisk);

	for(lines  = 0; lines < num_lines; lines++){
		for(i = 0; i < lines; i++){
			printf("\t");
		        }
			for(num = 0; num< num_asterisk; num++){
				printf("*");}
		printf("\n");
	}
    return 0;
}
