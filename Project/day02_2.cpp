#include<stdio.h>
void main() {

	// 비교 연산자
	// >, <, >=, <=, ==, != (!:NOT(부정))
	// 참 T -> 1
	// 거짓 F -> 0
	printf("10>5 = %d\n", 10 > 5); // 10 > 5의 결과값(참이면 1, 거짓이면 0)이 %d에 저장됨.

	// 논리 연산자 (AND, OR, NOT)
	// &&, ||, !
	printf("10>1 || 10>5 = %d\n", 10 > 1 || 10 > 5);
	printf("10>1 && 10>5 = %d\n", 10 > 1 && 10 > 5);

	// 삼항 연산자 == 조건 연산자
	// [조건식] ? T : F
	int res1 = 10 < 100 ? 1 : 0;
	int res2 = 10 > 100 ? 1 : 0;
	printf("%d %d\n\n", res1, res2);
	
	printf("정수1 입력: ");
	scanf("%d", &res1);
	printf("정수2 입력: ");
	scanf("%d", &res2);
	printf("더 큰 값은 %d입니다.\n\n", res1 > res2 ? res1 : res2);


	// 삼항 연산 연습
	int a, b, c;
	printf("세 정수를 입력하세요.");
	scanf("%d%d%d", &a, &b, &c);
	printf("가장 작은 정수는 %d 입니다.\n\n", a < b ? (a < c ? a : c) : (b < c ? b : c));
	//printf("가장 작은 정수는 %d 입니다.\n\n", (a < b ? a : b) < c ? (a < b ? a : b) : c);

}