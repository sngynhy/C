#include<stdio.h>
#include<Windows.h>
void main() {

	// �л� 3��, ���� 2��
	// �� �л����� ���� ���� ���(�Ǽ���)
	// �׸��� 1�� �л��� "��ȣ" ���

	int stu[3][2];
	double stuAvg[3];

	for (int i = 0; i < 3; i++) {
		
		printf("ä����...");
		Sleep(300);
		
		int sum = 0;
		for (int j = 0; j < 2; j++) {
			stu[i][j] = rand() % 101;
			printf("%d�� ", stu[i][j]);
			sum += stu[i][j];
		}
		stuAvg[i] = sum / 2.0;
		printf("%d�� �л��� ��� ������ %lf�Դϴ�.\n", i + 1, stuAvg[i]);
	}

	double max = stuAvg[0];
	int i;
	for (i = 1; i < 3; i++) {
		if (max < stuAvg[i]) {
			max = stuAvg[i];
		}
	}
	printf("%d ", i);
}