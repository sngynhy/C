#include<stdio.h>
void main() {

	int a = 10;

	// 대입 연산자(=)는 오른쪽에서 왼쪽으로 연산. 순서 중요!
	// 오른쪽의 결과값을 왼쪽 변수에 저장
	a = a + 2;
	printf("a= %d\n\n", a);

	// 복합 대입 연산자 - 효율성이 높음
	a += 2;
	printf("a= %d\n\n", a);

	// 증감 연산자 - 1씩 증감
	// 디버깅표 (중요!) - 변수 값의 변화 추이를 기록
	int b = 5;
	b++;
	printf("b= %d\n\n", b);
	++b;
	printf("b= %d\n\n", b);
	b--;
	printf("b= %d\n\n", b);
	--b;
	printf("b= %d\n\n", b);

	int c = 10;
	int d = c++; // 대입 연산자 > 후위 증감 연사자(연산 순위 가장 낮음) -> 즉, 대입 연산을 먼저 한 후 증감 연산이 이루어진다.
	printf("c=%d  d=%d\n", c, d);
	d = ++c; // 대입 연산자 < 전위 증감 연산자 -> 증감 연산 후 대입 연산
	printf("c=%d  d=%d\n", c, d);

}