#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {
	
	/* 배열 생성 시 확인해야 할 3요소
		1. 관련성
		2. 같은 자료형
		3. 크기를 정확히 파악 */

	// 중복값 배제 로직, ☆정렬★, 탐색(or 검색) 알고리즘

	srand(time(NULL));

	// 로또 예제
	int arr[5];
	for (int i = 0; i < 5; i++) { // 배열의 index number 유의!
		arr[i] = rand() % 45 + 1; // 1 ~ 45의 정수
	}

	printf("["); 
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");


	// 탐색, 검색 알고리즘
	int v;
	printf("찾고싶은 정수 입력: ");
	scanf("%d", &v);

	// 첫번째 로직
	// 못 찾으면 0회 출력(최대 5번 출력 가능)
	for (int i = 0; i < 5; i++) {
		if (v == arr[i]) {
			printf("찾았다!\n");
		}
	}
	
	// 두번째 로직
	// 못 찾으면 "없음", 찾으면 "찾음" + "갯수" 출력
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		if (v == arr[i]) {
			cnt++;
		}
	}
	if (cnt == 0) {
		printf("없음\n");
	}
	else {
		printf("%d개 찾음\n", cnt);
	}

}