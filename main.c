#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//3-3. 두개의 정수 중에서 큰 수를 계산하는 함수를 구현하고 호출해서 결과값 확인 
int get_max(int x, int y) {
	if (x>y) {
		return x;
	} else {
		return y;
	}
}

int main() {
	int num1, num2;
	
	printf("첫 번째 정수를 입력하세요: ");
	scanf("%d", &num1);
	
	printf("두 번째 정수를 입력하세요: ");
	scanf("%d", &num2);
	
	int max = get_max(num1, num2);
	
	printf("두 정수 중에서 큰 수: %d\n", max);
	
	return 0; 
}
