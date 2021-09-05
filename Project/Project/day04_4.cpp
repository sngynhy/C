#include<stdio.h>
void main() {

	// 중첩 반복문 == 이중 반복문
	
	// 구구단
	for (int i = 2; i <= 9; i++) {
		// 8번
		for (int j = 1; j <= 9; j++) {
			// 9번 x 8 = 72번
			printf("%d x %d = %d\n", i, j, i * j);
		}
		// 8번
		printf("============\n");
	}


	// 별찍기!!!!!
	for (int i = 0; i < 5; i++) {  // 좌하단
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");

	
	for (int i = 0; i < 5; i++) {  // 좌상단
		for (int j = 5; i < j; j--) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++) { // 강사님 코드
		for (int j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");

	for (int i = 0; i < 5; i++) {  // 우하단
		for (int j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	for (int i = 0; i < 5; i++) {  // 강사님 코드
		for (int j = 0; j < 5; j++) {
			if (j < 4 - i) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
	printf("\n\n");

	for (int i = 0; i < 5; i++) {  // 우상단
		for (int k = 0; k < i; k++) {
			printf(" ");
		}
		for (int j = 0; j < 5 - i; j++) {
				printf("*");
			}
		printf("\n");
	}

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < i; j++) {

		}
	}
	printf("\n\n");
	
	for (int i = 0; i < 5; i++) { // 피라미드
		for (int k = 0; k < 4 - i; k++) {
			printf(" ");
		}
		for (int j = 0; j <= 2 * i; j++) {
			printf("*");
		}
		printf("\n");
	}
}