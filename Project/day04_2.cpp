#include<stdio.h>
void main() {
	// 10 ~ 99 사이의 정수 1개 입력 -> 만약 범위 밖의 수를 입력하면 재입력
	// 입력된 수까지의 모든 수 출력 후 범위 내 짝수 출력
	int num, sum = 0;
	do {
		printf("10 ~ 99에 포함되는 정수 1개를 입력하세요. ");
		scanf("%d", &num);
	} while (num < 10 || 99 < num);

	for (int i = 1; i <= num; i++) {
		printf("%d ", i);
		if (i % 2 == 0) {
			sum += i;
		}
	}
	printf("\n짝수의 합은 %d\n\n", sum);


	// 1 ~ 10 사이의 정수 1개 입력 -> 만약 범위 밖의 수를 입력하면 재입력
	// 입력된 정수의 배수만 출력 (1 ~ 100)
	int a;

	do {
		printf("1 ~ 10에 포함되는 정수 1개를 입력하세요. ");
		scanf("%d", &a);
	} while (a < 1 || 10 < a);

	for (int i = 1; i * a < 100; i++) {
		int b = 0;  // 반복될때마다 초기화됨
		b = a * i;
		printf("%d ", b);
	}
}