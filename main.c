#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;   // �� ���� �Է� ���� 
	char op;   // ������ ���� 
	int result;   // ���� ��� ���� 
	
	// �� ���� �Է�����, �� ���� ������ ���� �Է� �ޱ� 
	printf("enter the calculation : ");
	scanf("%d %c %d", &x, &op, &y);
	
	// �����ڿ� ���� ������� ��� (result�� ����) 
	if(op == '+')   // + �� ��� 
	    result = x + y;
	else if(op == '-')   // - �� ��� 
	    result = x - y;
	else if(op == '*')   // * �� ��� 
	    result = x * y;
	else   // / �� ��� 
	    result = x / y;	    
	    
	
	// switch ��� 
	switch(op)
	{
		case '+':
		    result = x + y;
		    break;
		case '-':
		    result = x - y;
		    break;
		case '*':
		    result = x * y;
		    break;
		case '/':
		    result = x / y;
		    break;
	}
	
	printf("The result is %d", result);
	
	return 0;
}
