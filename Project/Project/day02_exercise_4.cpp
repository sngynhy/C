#include<stdio.h>
void main() {

	int score;
	printf("점수를 입력하세요. ");
	scanf("%d", &score);

	if (score < 0 || 100 < score) {
		printf("잘못 입력 되었습니다.\n");
	}
	else {
		if (score <= 50) {
			printf("F");
		}
		else if (score <= 60) {
			printf("C");
		}
		else if (score <= 70) {
			printf("B");
		}
		else {
			printf("A");
		}
	}
}