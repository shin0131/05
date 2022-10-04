#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	
	printf("Input an integer : ");
	scanf("%d", &number);
	
	if(number < 0)
	    number = -1 * number;
	    
	printf("절대값은 %d 입니다.", number);
	
	return 0;
}
