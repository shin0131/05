#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum = 0;
	int number;
	int i;
	
	printf("input an integer : ");
	scanf("%d", &number);
	
	// for ���� Ȱ���Ͽ� 1���� number���� sum�� ���ϴ� �ڵ� 
	for(i = 1; i <= number; i++)   // �ݺ� (�ʱ��; ���ǽ�; ������) 
	{
		sum = sum + i;   // ���ϱ� 
	}
	
	printf("The result is %d", sum);   // ��� ��� 
	
	return 0;
}
