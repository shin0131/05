#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num = 0; 
	
	printf("input a string : ");
	
	while ( (c = getchar() ) != '\n')   // 입력된 문자가 개행문자가 나올 때까지 반복 
	{
		if( c >= '0' && c <= '9' )   // 입력된 글자 (c)가 숫자인가? 
		    num = num + 1;   // 그렇다면 num에 하나를 센다. 
	}
	
	printf("The number of digits is %d", num);   
	
	return 0;
}
