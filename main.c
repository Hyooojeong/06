#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//3-1. �ΰ��� ������ ���ϴ� �Լ��� �����ϰ� ȣ���ؼ� ����� Ȯ�� 
int sumTwo(int a, int b) {
	int sum = a + b;
	return sum;
}

int main() {
	int x, y;
	
	printf("ù ��° ������ �Է��ϼ���: ");
	scanf("%d", &x);
	
	printf("�� ��° ������ �Է��ϼ���: ");
	scanf("%d", &y);
	
	int result = sumTwo(x, y);
	
	printf("�� ������ ��: %d\n", result);
	
	return 0;
}

//3-2. 
int square(int n) {
	int result = n*n;
	return result;
}

int main() {
	int num;
	
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);
	
	int squared = square(num);
	
	printf("%d�� ����: %d\n", num, squred);
	
	return 0; 
}
