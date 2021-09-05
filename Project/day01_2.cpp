#include<stdio.h>
void main() {
	int a = 10;
	int b = 20;
	printf("a에 %d이 있다.\n", a); // 형식 지정자 제어 문자
	printf("b에 %d이 있다.\n\n", b);
	printf("a에 %d이 있다.\nb에 %d이 있다.\n\n", a, b); // a, b 순서에 맞춰서 작성

	double d = 3.14;
	char c = 'A';
	printf("d=%lf   c=%c\n\n", d, c);

	int num = a + b;
	printf("%d + %d = %d\n\n", a, b, num);

}
/*
형식 지정자 제어 문자
 %d : int 정수
 %lf : double 실수
 %c : char (단일)문자
 %s : string 문자열
*/

/*
연산자 우선 순위
대입 연산자는 대체적으로 우선 순위가 낮다.
*/