#include <stdio.h>
#include <string.h>


void clean_quotes(char * string){
	
	for(int i =0; i < 20; i++){
		if(string[i] == '\"' || string[i] == '\''){
			string[i] = ' ';
		}
	}
}

int main(){
	char string1[20];
	char string2[20];
	char string3[20];
	
	printf("Please enter string: ");
	scanf("%s%s%s", string1, string2, string3);
	clean_quotes(string1);
	clean_quotes(string2);
	clean_quotes(string3);
	printf("%s%s%s", string1, string2, string3);
}