#include<stdio.h>
void f1(int n);
int isPrime(int n);
void f3(int x, int y);
void main() {

	// ������ �߰��� �Լ� ����
	// ���, ���, �Ҽ�, �ռ���, �ּҰ����, �ִ�����

	// 1) 1 �̻��� ���� �Է� => �Էµ� ������ ��� ����ϴ� �Լ� ����
	int a;
	do {
		printf("1 �̻��� ������ �Է��ϼ���. ");
		scanf("%d", &a);
		f1(a);
	} while (a < 1);
	
	// 2) 2 �̻��� ���� �Է� => �Էµ� ������ �Ҽ����� �ƴ��� ����ϴ� �Լ� ����
	int b;
	printf("2 �̻��� ������ �Է��ϼ���. ");
	scanf("%d", &b);
	if (isPrime(b)) {
		printf("%d�� �Ҽ��Դϴ�.\n\n", b);
	}
	else {
		printf("%d�� �Ҽ��� �ƴմϴ�.\n\n", b);
	}


	// 3) 1 �̻��� ���� 2�� �Է� => �� ���� �ִ������� �ּҰ���� ����ϴ� �Լ� ����
	int x, y;
	printf("1 �̻��� �� ������ �Է��ϼ���. ");
	scanf("%d%d", &x, &y);
	f3(x, y);

}

void f1(int n) {
	printf("%d�� ����� ", n);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			//arr[i - 1] = i;
			printf("%d, ", i);
		}
	}
	printf("�Դϴ�.\n\n");
}

int isPrime(int n) {
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cnt++;
		}
	}
	if (cnt == 2) {
		return 1;
	}
	else {
		return 0;
	}
	printf("\n\n");
}

void f3(int x, int y) {
	if (x > y) {  // ���� ���� x�� ����
		int tmp = x;
		x = y;
		y = tmp;
	}
	for (int i = x; i >= 1; i--) {  // ���� ���� ��������!
		if (x % i == 0 && y % i==0) {
			printf("%d�� %d�� �ִ������� %d�Դϴ�.\n", x, y, i);
			printf("%d�� %d�� �ּҰ������ %d�Դϴ�.\n", x, y, x * y / i);  // �� ���� �� = �ִ�����*�ּҰ����
			break;
		}
	}
}