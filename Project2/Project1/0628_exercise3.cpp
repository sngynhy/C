#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {

	srand(time(NULL));

	int arr[5];

	for (int i = 0; i < 5; i++) {
		arr[i] = rand() % 9 + 1;  // ������ 1~9���� �������� 5�� ����
	}

	printf("[");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");


	// Ǯ�� 1)
	// ��ø for��
	for (int a = 1; a <= 9; a++) {
		int cnt = 0;
		for (int i = 0; i < 5; i++) {
			if (a == arr[i]) {
				cnt++;
			}
		}

		if (cnt == 0) {  // ���� 0���� �ǳʶپ�!
			continue;
		}
		printf("%d: %d��\n", a, cnt);
	}
	printf("\n\n");


	// Ǯ�� 2)
	// ������ ����

	int numCnt[9] = { 0 }; // [0 0 0 ... 0] �迭�� ��� ���� 0���� �ʱ�ȭ
	for (int i = 0; i < 5; i++) {
		
		numCnt[arr[i]-1]++;  // �Ʒ� if���� ���缺(��Ģ��)�� �ľ��Ͽ� ������ �ۼ�
		/*
		if (arr[i] == 1) {
			numCnt[0]++;
		}
		else if (arr[i] == 2) {
			numCnt[1]++;
		}
		else if (arr[i] == 3) {
			numCnt[2]++;
		}
		*/
	}
	for (int i = 0; i < 9; i++) {
		if (numCnt[i] == 0) {
			continue;
		}
		printf("%d: %d��\n", i + 1, numCnt[i]);
	}
}