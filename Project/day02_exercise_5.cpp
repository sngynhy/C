#include<stdio.h>
void main() {

	int a, b;
	char op;

	printf("정수 문자 정수를 입력하세요. ");
	scanf("%d %c%d", &a, &op, &b);

	if (op == '+' || op == '-' || op == '*') {
		int res;
		if (op == '+') {
			res = a + b;
		}
		else if (op == '-') {
			res = a - b;
		}
		else {
			res = a * b;
		}
		printf("%d %c %d = %d\n", a, op, b, res);
	}
	else {
		printf("잘못 입력 되었습니다.\n");
	}
}