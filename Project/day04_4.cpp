#include<stdio.h>
void main() {

	// ��ø �ݺ��� == ���� �ݺ���
	
	// ������
	for (int i = 2; i <= 9; i++) {
		// 8��
		for (int j = 1; j <= 9; j++) {
			// 9�� x 8 = 72��
			printf("%d x %d = %d\n", i, j, i * j);
		}
		// 8��
		printf("============\n");
	}


	// �����!!!!!
	for (int i = 0; i < 5; i++) {  // ���ϴ�
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");

	
	for (int i = 0; i < 5; i++) {  // �»��
		for (int j = 5; i < j; j--) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++) { // ����� �ڵ�
		for (int j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");

	for (int i = 0; i < 5; i++) {  // ���ϴ�
		for (int j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	for (int i = 0; i < 5; i++) {  // ����� �ڵ�
		for (int j = 0; j < 5; j++) {
			if (j < 4 - i) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
	printf("\n\n");

	for (int i = 0; i < 5; i++) {  // ����
		for (int k = 0; k < i; k++) {
			printf(" ");
		}
		for (int j = 0; j < 5 - i; j++) {
				printf("*");
			}
		printf("\n");
	}

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < i; j++) {

		}
	}
	printf("\n\n");
	
	for (int i = 0; i < 5; i++) { // �Ƕ�̵�
		for (int k = 0; k < 4 - i; k++) {
			printf(" ");
		}
		for (int j = 0; j <= 2 * i; j++) {
			printf("*");
		}
		printf("\n");
	}
}