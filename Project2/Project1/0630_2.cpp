#include<stdio.h>
// 정수를 넘겨주면, +10 처리하여 출력하는 함수
void func(int num) {
	num += 10;
	printf("받은 정수의 값은 %d이 되었습니다.\n", num); // return 값이 없는 함수는 결과를 변수에 따로 저장 불가능
}

void func2(int a, int b) {
	printf("%d + %d = %d\n", a, b, a + b);
}

void main() {
	int i;
	printf("+10 처리할 정수 입력: ");
	scanf("%d", &i); // 11

	// int a = func(i); // return 값이 없는 함수는 결과를 변수에 따로 저장 불가능
	func(i); // 11+10=21
	printf("마지막 num의 값은? %d\n\n", i); // 11

	int a = 20, b = 20, c = 30, d = 40;
	func2(a, b);
	func2(a, c);
	func2(a, d);
	func2(c, d);
}