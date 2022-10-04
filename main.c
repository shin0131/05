#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum = 0;
	int number;
	int i;
	
	printf("input an integer : ");
	scanf("%d", &number);
	
	// for 문을 활용하여 1부터 number까지 sum에 더하는 코드 
	for(i = 1; i <= number; i++)   // 반복 (초기식; 조건식; 증감식) 
	{
		sum = sum + i;   // 더하기 
	}
	
	printf("The result is %d", sum);   // 결과 출력 
	
	return 0;
}
