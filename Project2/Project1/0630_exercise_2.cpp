#include<stdio.h>

void f(int N); // �Լ� ���� ����

void main() {

	// 1000~9999 4�ڸ� ���� �Է�
	int N = 1234;
	f(N); // 4 3 2 1 ���
}

// ���� �ڸ��� ����ϴ� �Լ� => ����Լ���
void f(int N) {
	printf("%d ", N % 10);
	if (N / 10 != 0) {
		f(N / 10);
	}
	//printf("%d ", N % 10);
}