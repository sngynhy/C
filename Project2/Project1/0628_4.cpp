#include<stdio.h>
void main() {

	// ������ �迭 == DB ���̺�

	int stu1[3] = { 10, 20, 30 };
	int stu2[3] = { 32, 14, 15 };

	int STU[2][3] = { { 10, 20, 30 } , { 32, 14, 15 } };

	for (int i = 0; i < 2; i++) {
		printf("==�л� %d�� ����==\n", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("%d�� ", STU[i][j]);
		}
		printf("\n");
	}

	// ������Ϻ� �����
	int stu[3][2];

	for (int a = 0; a < 3; a++) {
		printf("%d�� �л� ���� �Է�...\n", a + 1);

		for (int i = 0; i < 2; i++) {
			printf("���� %d�� ���� �Է�: ", i + 1);
			scanf("%d", &stu[a][i]);
		}
		printf("���� �Է� �Ϸ�!\n\n");
	}

	for (int a = 0; a < 3; a++) {
		for (int i = 0; i < 2; i++) {
			printf("%d�� ", stu[a][i]);
		}
	}
}