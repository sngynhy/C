#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {

	srand(time(NULL));

	// 1 ~ 100 난수 50개 저장
	int arr[50];
	
	printf("[");
	for (int i = 0; i < 50; i++) {
		arr[i] = rand() % 100 + 1;
		printf("%d ", arr[i]);
	}
	printf("]\n\n");


	// 1) 오름 차순 정렬
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


	// 2) 각 숫자의 개수 출력
	// 1: 1개
	// 2: 2개
	// .. 단, 0개는 수는 출력하지 않음
	int numCnt[100] = { 0 };
	for (int i = 0; i < 50; i++) {  // 숫자 카운팅
		numCnt[arr[i] - 1]++;
	}
	for (int i = 0; i < 100; i++) {  // 카운트 한 숫자 출력
		if (numCnt[i] == 0) {
			continue;
		}
		printf("%d: %d개\n", i + 1, numCnt[i]);
	}
	printf("\n\n");



	// 3) 가장 많이 출력된 값 출력 (최빈값) - numCnt의 최댓값 인덱스
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
	printf("가장 많이 출력된 값은 [");
	for (int i = 0; i < 100; i++) {
		if (max == numCnt[i]) {
			printf("%d ", i + 1);
		}
	}
	printf("]입니다.\n\n");

	// 4) 가장 적게 출력된 값 출력 - numCnt의 최솟값 인덱스
	printf("가장 적게 출력된 값: ");
	for (int i = 0; i < 100; i++) {
		if (numCnt[i] == min) {
			printf("%d ", i+1);
		}
	}
}