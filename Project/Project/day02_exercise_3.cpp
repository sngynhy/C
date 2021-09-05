#include<stdio.h>
void main() {
	int month;
	printf("월을 입력하세요. ");
	scanf("%d", &month);

	// 유효성 검사 : 사용자가 입력한 값이 올바른 값인지 1차 검사하는 것.
	if (1 <= month && month <= 12) {
		if (3 <= month && month <= 5) {
			printf("봄\n");
		}
		else if (6 <= month && month <= 8) {
			printf("여름\n");
		}
		else if (9 <= month && month <= 11) {
			printf("가을\n");
		}
		else {
			printf("겨울\n");
		}
	}
	else {
		printf("잘못 입력 되었습니다.");
	}
}