#include<stdio.h>
void main() {
	// �ڷ����� Ÿ�� ��ȯ
	int i = 3.14; // �Ҽ��� �Ʒ� ���� ����. double -> int �ڵ� ����ȯ
	printf("i=%d\n", i);

	double res = 3.14;
	int num = (int) res;  // ����� ����ȯ. ������ �ս�
	printf("num=%d\n", num);

	int stu1 = 81;
	int stu2 = 80;
	int stu3 = 14;
	double avg = (double) (stu1 + stu2 + stu3) / 3;
	// a / b�� int�� �����̱� ������ (double)�� ���� Ÿ�� ��ȯ ���־�� �Ҽ��� �Ʒ� ������ ����
	// �Ǵ� (stu1 + stu2 + stu3) / 3.0 �Ǵ� (stu1 + stu2 + stu3) * 1.0 / 3�� ����
	printf("avg=%lf\n\n", avg);


	// �����ϱ�
	int score1, score2, score3, score4;
	
	printf("�л�1�� �߰���� ����: ");
	scanf("%d", &score1);
	printf("�л�1�� �⸻��� ����: ");
	scanf("%d", &score2);
	
	double avg1 = (double)(score1 + score2) / 2;
	printf("�л�1�� ��� ������ %.2lf�Դϴ�.\n\n", avg1); // %.2lf : �Ҽ��� �Ʒ� ���ڸ����� ���

	printf("�л�2�� �߰���� ����: ");
	scanf("%d", &score3);
	printf("�л�2�� �⸻��� ����: ");
	scanf("%d", &score4);

	double avg2 = (score3 + score4) / 2.0;
	printf("�л�2�� ��� ������ %lf�Դϴ�.\n\n", avg2);

	printf("������ �� ���� �л��� ��� ������ %lf�Դϴ�.\n\n", avg1 > avg2 ? avg1 : avg2);
}