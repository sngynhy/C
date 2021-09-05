#include<stdio.h>
void main() {

	// "이분검색" == "이진탐색"
	// 선행 조건 : 탐색하고자 하는 배열이 정렬되어 있어야함!
	int data[10];
	printf("[");
	for (int i = 0; i < 10; i++){
		data[i] = i + 1;
		printf("%d ", data[i]);
	}
	printf("]\n");

	int value;
	printf("찾으려는 값 입력: ");
	scanf("%d", &value);

	int l = 0;
	int h = 9;

	while (l <= h) {  // l > h 즉 교차현상이 발생하기 전까지 수행
		
		int m = (l + h) / 2;  // 반복적으로 수행

		// 종료 조건 구현
		if (value == data[m]) {  // 배열의 중앙값과 비교
			printf("찾았다!\n");
			break;
		}
		else if (value < data[m]) {
			printf("다운!\n");
			h = m - 1;
		}
		else {
			printf("업!\n");
			l = m + 1;
		}

	}
	if (l > h) { // 만약 교차현상이 발생했다면
		printf("찾는 값 없음!\n");
	}
}