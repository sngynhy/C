#include<stdio.h>
void main() {
	// 반복문 (for문)

	// 1)
	int num;
	printf("정수를 입력하세요. ");
	scanf("%d", &num);

	if (num < 0) {  // 음수인 경우 -1을 곱하여 양수로 처리
		num *= (-1);
	}

	int sum = 0;
	for (int i = 0; i <= num; i++) {
		printf("%d ", i);
		sum += i;
	}
	printf("합은 %d\n", sum);


	// 2)
	int a, b;
	printf("두 정수를 입력하세요. ");
	scanf("%d%d", &a, &b);

	if (a > b) {  // a와 b의 값 교환
		int tmp = a;
		a = b;
		b = tmp;
	}

	/*for (a; a <= b; a++)  // a ~ b 하나씩 증가하며 출력
		printf("%d ", a);
	}
	printf("\n\n");*/

	for (b; a <= b; b--) {  // b ~ a 하나씩 감소하며 출력
		printf("%d ", b);
	}
	printf("\n\n");

	// 3)
	char al;
	printf("한 개의 문자를 입력하세요. ");
	scanf(" %c", &al);

	if (al < 97) {  // 대문자 -> 소문자로 변경
		al += 32;
	}
	for (char c = 'a'; c <= al; c++) {
		printf("%c ", c);
	}

}