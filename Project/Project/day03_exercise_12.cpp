#include<stdio.h>
void main() {
	
	// 2)
	// ���� �Է�
	// �Է��� ������ ������ŭ �Ǽ� �Է�
	// �Ǽ����� �հ� ��� ���
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);

	int i = 0;
	double sum = 0.0;
	while (i < num) {
		double d;
		printf("�Ǽ��� �Է��ϼ���. ");
		scanf("%lf", &d);
		sum += d;
		i++;
	}
	double avg = sum / num;
	printf("�Ǽ��� ���� %fl�̰�, ����� %lf�̴�.", sum, avg);
}