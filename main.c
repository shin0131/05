#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int trial = 0;
    int number; 
	
	do
	{
		printf("Guess a number : ");   /// 입력하라 문제 출력 
		scanf("%d", &number);   /// 입력을 받음
		trial++;   /// 시도 횟수 계산 
		
		/// 입력숫자가 정답보다 큰지 작은지 출력 
		if(number > answer)
		    printf("high!\n");
		else if(number < answer)
		    printf("low!\n");		
	 } 
	while (number != answer);
	
	printf("\nCongratulation! Number of trial = %i\n", trial);   // 결과, 횟수 출력 
		
	return 0;
}

