#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//3-2. ������ ������ ����ϴ� �Լ��� �����ϰ� ȣ���ؼ� ����� Ȯ�� 
int square(int n) {
	int result = n*n;
	return result;
}

int main() {
	int num;
	
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);
	
	int squared = square(num);
	
	printf("%d�� ����: %d\n", num, squared);
	
	return 0; 
}
