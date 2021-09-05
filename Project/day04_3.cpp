#include<stdio.h>
void main() {

	// for + break, continue;

	for (int i = 0; i < 5; i++) {
		int num;
		printf("정수입력: ");
		scanf("%d", &num);

		if (num < 0) {
			break; // 15라인으로 이동
		}
	}

	for (int i = 0; i < 5; i++) {
		int num;
		printf("정수입력: ");
		scanf("%d", &num);

		// num가 음수라면 홀짝판별안하고싶어
		// 근데 for문 자체를 종료하고싶지도 않아..
		if (num < 0) {
			i--;
			continue;
			// while문 -> 조건식으로 이동
			// for문 -> 증감식으로 이동
		}

		if (num % 2 == 0) {
			printf("짝수\n");
		}
		else {
			printf("홀수\n");
		}
	}
}