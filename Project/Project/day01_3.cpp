#include<stdio.h>
#define RATE 1.23 // 사용자 정의 상수 == 기호 상수 : 사용자가 상수를 정의함 (타입 무관), 상수는 대체적으로 대문자로 표기
void main() {
	double r = 1.1;
	const double PI = 3.14; // const == 심볼릭 상수 : 변수 상수화. 선언된 이후에는 값을 변경할 수 없음(자바의 static final과 같음)
	double size = r * r * PI;
	printf("%lf", size);
}

