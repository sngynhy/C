#include<stdio.h>
void main() {

	int a, b;
	char op;

	printf("���� ���� ������ �Է��ϼ���. ");
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
		printf("�߸� �Է� �Ǿ����ϴ�.\n");
	}
}