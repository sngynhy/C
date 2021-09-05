#include<stdio.h>

void f(int N); // 함수 원형 선언

void main() {

	// 1000~9999 4자리 정수 입력
	int N = 1234;
	f(N); // 4 3 2 1 출력
}

// 일의 자리를 출력하는 함수 => 재귀함수로
void f(int N) {
	printf("%d ", N % 10);
	if (N / 10 != 0) {
		f(N / 10);
	}
	//printf("%d ", N % 10);
}