#include<stdio.h>
void main() {

	int num;

	// scanf : �� �Է¹ޱ�
	scanf("%d", &num);  // scanf�� �ּ� �ۼ� �� ���� �տ� &(�ּҿ�����)�� �ٿ���� ��.
	printf("num = %d\n\n", num); // printf�� ������ �ּҰ� �ƴ� ����� ���� ���� ���̱� ������ &(�ּҿ�����)�� ������ ����.
	// scanf_s ���� �ذ� : ������Ʈ -> �Ӽ� -> C -> ��ó���� ���� -> '_CRT_SECURE_NO_WARNINGS'�� ����


	// ��� ���� + - * / %
	// INT ���� 10 / 3 = 3 (��)
	// MOD ���� 10 % 3 = 1 (������)
	int a, b;
	printf("�� ������ �Է��ϼ���.");
	scanf("%d%d", &a, &b);  // ""�ȿ��� �����̳� Ư������ ���� ����.
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
}