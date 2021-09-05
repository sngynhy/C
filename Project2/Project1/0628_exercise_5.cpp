#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {

	srand(time(NULL));

	// 1 ~ 100 ���� 50�� ����
	int arr[50];
	
	printf("[");
	for (int i = 0; i < 50; i++) {
		arr[i] = rand() % 100 + 1;
		printf("%d ", arr[i]);
	}
	printf("]\n\n");


	// 1) ���� ���� ����
	printf("[");
	for (int a = 0; a < 49; a++) {
		for (int i = 0; i < 49; i++) {
			if (arr[i] > arr[i + 1]) {
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 50; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n\n");


	// 2) �� ������ ���� ���
	// 1: 1��
	// 2: 2��
	// .. ��, 0���� ���� ������� ����
	int numCnt[100] = { 0 };
	for (int i = 0; i < 50; i++) {  // ���� ī����
		numCnt[arr[i] - 1]++;
	}
	for (int i = 0; i < 100; i++) {  // ī��Ʈ �� ���� ���
		if (numCnt[i] == 0) {
			continue;
		}
		printf("%d: %d��\n", i + 1, numCnt[i]);
	}
	printf("\n\n");



	// 3) ���� ���� ��µ� �� ��� (�ֺ�) - numCnt�� �ִ� �ε���
	int max = numCnt[0];
	int min = numCnt[0];
	for (int i = 1; i < 100; i++) {
		if (max < numCnt[i]) {
			max = numCnt[i];
		}
		if (min > numCnt[i]) {
			min = numCnt[i];
		}
	}
	printf("���� ���� ��µ� ���� [");
	for (int i = 0; i < 100; i++) {
		if (max == numCnt[i]) {
			printf("%d ", i + 1);
		}
	}
	printf("]�Դϴ�.\n\n");

	// 4) ���� ���� ��µ� �� ��� - numCnt�� �ּڰ� �ε���
	printf("���� ���� ��µ� ��: ");
	for (int i = 0; i < 100; i++) {
		if (numCnt[i] == min) {
			printf("%d ", i+1);
		}
	}
}