#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int trial = 0;
    int number; 
	
	do
	{
		printf("Guess a number : ");   /// �Է��϶� ���� ��� 
		scanf("%d", &number);   /// �Է��� ����
		trial++;   /// �õ� Ƚ�� ��� 
		
		/// �Է¼��ڰ� ���亸�� ū�� ������ ��� 
		if(number > answer)
		    printf("high!\n");
		else if(number < answer)
		    printf("low!\n");		
	 } 
	while (number != answer);
	
	printf("\nCongratulation! Number of trial = %i\n", trial);   // ���, Ƚ�� ��� 
		
	return 0;
}

