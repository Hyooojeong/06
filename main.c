#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//3-3. �ΰ��� ���� �߿��� ū ���� ����ϴ� �Լ��� �����ϰ� ȣ���ؼ� ����� Ȯ�� 
int get_max(int x, int y) {
	if (x>y) {
		return x;
	} else {
		return y;
	}
}

int main() {
	int num1, num2;
	
	printf("ù ��° ������ �Է��ϼ���: ");
	scanf("%d", &num1);
	
	printf("�� ��° ������ �Է��ϼ���: ");
	scanf("%d", &num2);
	
	int max = get_max(num1, num2);
	
	printf("�� ���� �߿��� ū ��: %d\n", max);
	
	return 0; 
}
