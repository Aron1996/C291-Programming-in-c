/* Print "Hello World" every three seconds until kill it
*/

#include <stdio.h>
#include <unistd.h>

int main(void){
	while(1){
		printf("Hello, World\n");
		sleep(3);
	}
}
