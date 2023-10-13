#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//3-2. 정수의 제곱을 계산하는 함수를 구현하고 호출해서 결과값 확인 
int square(int n) {
	int result = n*n;
	return result;
}

int main() {
	int num;
	
	printf("정수를 입력하세요: ");
	scanf("%d", &num);
	
	int squared = square(num);
	
	printf("%d의 제곱: %d\n", num, squared);
	
	return 0; 
}
