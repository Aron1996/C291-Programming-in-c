#include <stdio.h>
#include <string.h>
void append(char* s, char a, char b, char c, char d, char e, char f, char g);

const char alphabet[10][5] = {"", "", "abc", "def", "ghi", "jkl",
"mno", "pqrs", "tuv", "wxyz"};
char output[100000] =  "all combinations are :\n";
int number[7];
char temp[8];
void run(){
	printf("Please enter 7 digits phone numbers: ");
	scanf("%s", temp);
	for(int i=0; i<7; i++){
		number[i] = temp[i] - '0';
		if(number[i] == 0 || number[i] == 1){
			printf("Invalid input");
		}
	}
	
	for(int a = 0; a < strlen(alphabet[number[0]]); a++)
		for(int b = 0; b < strlen(alphabet[number[1]]); b++)
			for(int c = 0; c < strlen(alphabet[number[2]]); c++)
				for(int d = 0; d < strlen(alphabet[number[3]]); d++)
					for(int e = 0; e < strlen(alphabet[number[4]]); e++)
						for(int f = 0; f < strlen(alphabet[number[5]]); f++)
							for(int g = 0; g < strlen(alphabet[number[6]]); g++)
								append(output, alphabet[number[0]][a],alphabet[number[1]][b],alphabet[number[2]][c], alphabet[number[3]][d], alphabet[number[4]][e],alphabet[number[5]][f], alphabet[number[6]][g]);
}
void append(char* s, char a, char b, char c, char d, char e, char f, char g){
        int len = strlen(s);
        s[len] = a;
		s[len+1] = b;
		s[len+2] = c;
		s[len+3] = d;
		s[len+4] = e;
		s[len+5] = f;
		s[len+6] = g;
		s[len+7] = ' ';
        s[len+8] = '\0';
	}
int main(void){
	run();
	
	char fname[10];
	printf("enter file name: ");
	scanf("%s", fname);
	FILE *fp;
	fp = fopen(fname, "w");
	fprintf(fp, output);
	fclose(fp);
	
	char string[1000];
	printf("enter string want to search: ");
	scanf("%s", string);
}
								


							   
