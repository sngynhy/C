#include<stdio.h>
#include<stdlib.h>
void main() {
	
	// �ڡ����ġ١�
	//	�ʿ��� �����͸� Ž��(�˻�) �� �����ϰ�(������) ã�� ���ؼ�!

	// ���� ����
	// �� �տ������� �����ʿ� �ִ� ���� ��Ҹ� ���Ͽ� �ڸ��� ��ȯ���ִ� ���

	int arr[] = { 3, 4, 1, 5, 2 };

	// �������� ���� ����
	for (int a=0; a<4; a++) {
		for (int i = 0; i < 4; i++) {  // �տ������� �� ���� ���ϴ� ������ 4�� ����� == (������ ���� - 1)
			if (arr[i] > arr[i + 1]) {
				// �� �� ������ ��ȯ
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
		for (int i = 0; i < 5; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	printf("\n\n");


	// �������� ���� ����
	int arr2[10];
	for (int i = 0; i < 10; i++) {
		arr2[i] = rand() % 100 + 1;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n\n");

	for (int a = 0; a < 9; a++) {
		for (int i = 0; i < 9; i++) {
			if (arr2[i] < arr2[i + 1]) {
				int tmp = arr2[i];
				arr2[i] = arr2[i + 1];
				arr2[i + 1] = tmp;
			}
		}
		for (int i = 0; i < 10; i++) {
			printf("%d ", arr2[i]);
		}
		printf("\n");
	}
}