#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num = 0; 
	
	printf("input a string : ");
	
	while ( (c = getchar() ) != '\n')   // �Էµ� ���ڰ� ���๮�ڰ� ���� ������ �ݺ� 
	{
		if( c >= '0' && c <= '9' )   // �Էµ� ���� (c)�� �����ΰ�? 
		    num = num + 1;   // �׷��ٸ� num�� �ϳ��� ����. 
	}
	
	printf("The number of digits is %d", num);   
	
	return 0;
}
