#include<stdio.h>
void main() {
	// �迭���� ���� ū ��, ���� �� ���
	int arr[] = { 5, 3, 1, 4, 10, 7};
	
	//int max = arr[0];  // �迭 ���� ù��° ���� ���� ū ����� ��������
	//int min = arr[0];
	int maxIndex = 0;
	int minIndex = 0;

	for (int i = 1; i < 6; i++) {
		if (arr[maxIndex] < arr[i]) {
			maxIndex = i;
		}

		if (arr[minIndex] > arr[i]) {
			minIndex = i;
		}
	}
	printf("max=%d  min=%d\n", arr[maxIndex], arr[minIndex]);
	printf(" [%d]     [%d]\n", maxIndex, minIndex);
} 