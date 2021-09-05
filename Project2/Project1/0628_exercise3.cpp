#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {

	srand(time(NULL));

	int arr[5];

	for (int i = 0; i < 5; i++) {
		arr[i] = rand() % 9 + 1;  // 정수를 1~9까지 랜덤으로 5개 저장
	}

	printf("[");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");


	// 풀이 1)
	// 중첩 for문
	for (int a = 1; a <= 9; a++) {
		int cnt = 0;
		for (int i = 0; i < 5; i++) {
			if (a == arr[i]) {
				cnt++;
			}
		}

		if (cnt == 0) {  // 만약 0개면 건너뛰어!
			continue;
		}
		printf("%d: %d개\n", a, cnt);
	}
	printf("\n\n");


	// 풀이 2)
	// 데이터 관점

	int numCnt[9] = { 0 }; // [0 0 0 ... 0] 배열의 모든 값을 0으로 초기화
	for (int i = 0; i < 5; i++) {
		
		numCnt[arr[i]-1]++;  // 아래 if문의 유사성(규칙성)을 파악하여 간단히 작성
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
		printf("%d: %d개\n", i + 1, numCnt[i]);
	}
}