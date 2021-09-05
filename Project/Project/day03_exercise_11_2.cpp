#include<stdio.h>
void main() {

	// do-while문으로 풀이

	int num;  // do-while문에서는 선처리 후조건으로 num값을 미리 받고 조건문에 적용되기 때문에 초기화 불필요!
	do {
		printf("정수입력: ");
		scanf("%d", &num);
	} while (num < 1 || num < 10);

	int i = 1;
	int cnt = 0; // 수행 횟수 카운팅 변수
	while (i <= 100) {
		if (i % num == 0) {
			printf("%d ", i);
			cnt++;
		}
		i++;
	}
	printf("\n%d의 배수는 %d개 입니다.\n\n", num, cnt);
}