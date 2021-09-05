#include<stdio.h>
void main() {
	// 배열에서 가장 큰 수, 작은 수 출력
	int arr[] = { 5, 3, 1, 4, 10, 7};
	
	//int max = arr[0];  // 배열 제일 첫번째 수를 가장 큰 수라고 생각하자
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