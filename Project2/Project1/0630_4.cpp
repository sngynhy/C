#include<stdio.h>

// ����� ���� �Լ� �ڵ带 main() �Լ� �Ʒ��� �ۼ��ϱ� ���� �Լ� ������ ���� �����Ѵ�!
int func(int num);  // �Լ� ���� ����
double func2(double a, double b);  // �Լ� ���� ����

void main() { // main() �Լ� : ���α׷��� �����Ű�� �Լ�

	int x = 2;
	x = func(x);
	printf("%d\n", x);


	// �Ǽ� 2�� �Է�
	// �Ķ���ͷ� �Ǽ� 2���� �޾� �� �Ǽ��� ���� ���� ��ȯ�ϴ� �Լ� �ۼ�
	// ��, return�� ���� double res�� ���� �����Ͽ� ���
	double a, b;
	printf("�Ǽ� 2�� �Է�: ");
	scanf("%lf%lf", &a, &b);
	double res = func2(a, b);
	printf("%lf\n", res);

}

int func(int num) {
	num += 10;
	return num;  // return : �Լ��� ȣ�� �� ������ ����� ��ȯ �� �޼ҵ� ��� ���� (������� �ݵ�� �ϳ����� ��. ���� ���� �� �� ����)
}

double func2(double a, double b) {
	return a + b;
}