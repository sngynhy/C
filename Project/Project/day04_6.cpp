#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SU 3
void main() {

	srand(time(NULL));
	int randNum = rand() % 101;
	printf("%d\n", randNum);

	// ũ�Ⱑ 5�� �迭 ����
	// ��հ��� �Ǽ��� ���
	
	int stu[SU];  // �ڡڹ迭�� ���̷δ� ������ �ƴ� "���"�� ������!!!! - �迭�� ���� Ÿ���̹Ƿ�!!
	for (int i = 0; i < SU; i++) {
//		stu[i] = rand() % 101;
		printf("�л������Է�: ");
		scanf("%d", &stu[i]);

	}
	for (int i = 0; i < SU; i++) {
		printf("%d�� �л��� %d�� �Դϴ�.\n", i + 1, stu[i]);
	}
	int sum = 0;
	for (int i = 0; i < SU; i++) {
		sum += stu[i];
	}
	double avg = (double)sum / SU;
	printf("��� ������ %.2lf�� �Դϴ�\n.", avg);

}