#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	
	printf("Input an integer : ");
	scanf("%d", &number);
	
	if(number > 0)    //양수인 경우 
	    printf("양수입니다.");
	else if(number < 0)    //음수인 경우 
	    printf("음수입니다.");
	else    //0인 경우 
	    printf("0 입니다.");
	
	return 0;
}
