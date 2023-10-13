#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//3-1. 두개의 정수를 더하는 함수를 구현하고 호출해서 결과값 확인 
int sumTwo(int a, int b) {
	int sum = a + b;
	return sum;
}

int main() {
	int x, y;
	
	printf("첫 번째 정수를 입력하세요: ");
	scanf("%d", &x);
	
	printf("두 번째 정수를 입력하세요: ");
	scanf("%d", &y);
	
	int result = sumTwo(x, y);
	
	printf("두 정수의 합: %d\n", result);
	
	return 0;
}

//3-2. 
int square(int n) {
	int result = n*n;
	return result;
}

int main() {
	int num;
	
	printf("정수를 입력하세요: ");
	scanf("%d", &num);
	
	int squared = square(num);
	
	printf("%d의 제곱: %d\n", num, squred);
	
	return 0; 
}
