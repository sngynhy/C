#include<stdio.h>
// ������ �Ѱ��ָ�, +10 ó���Ͽ� ����ϴ� �Լ�
void func(int num) {
	num += 10;
	printf("���� ������ ���� %d�� �Ǿ����ϴ�.\n", num); // return ���� ���� �Լ��� ����� ������ ���� ���� �Ұ���
}

void func2(int a, int b) {
	printf("%d + %d = %d\n", a, b, a + b);
}

void main() {
	int i;
	printf("+10 ó���� ���� �Է�: ");
	scanf("%d", &i); // 11

	// int a = func(i); // return ���� ���� �Լ��� ����� ������ ���� ���� �Ұ���
	func(i); // 11+10=21
	printf("������ num�� ����? %d\n\n", i); // 11

	int a = 20, b = 20, c = 30, d = 40;
	func2(a, b);
	func2(a, c);
	func2(a, d);
	func2(c, d);
}