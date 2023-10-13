#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//5. Combination
int combination(int n, int r);
int factorial(int n);
int get_integer(const char *message);

int main(void) {
	int n, r;
	
	n = get_integer("���� n�� �Է��ϼ���: ");
	r = get_integer("���� r�� �Է��ϼ���: ");
	
	int result = combination(n, r);
	
	printf("C(%d, %d) = %d\n", n, r, result);
	
	return 0;
}

int combination(int n, int r) {
	if (r<0 || r>n) {
		return 0;
	}
	return factorial(n) / (factorial(r)*factorial(n-r));
}

int factorial(int n) {
	int res = 1;
	int i = 1;
	for (i<=n; i++;) {
		res*=i;
	}
	return res;
}

int get_integer(const char *message) {
	int input;
	printf("%s", message);
	scanf("%d", &input);
	return input;
}
