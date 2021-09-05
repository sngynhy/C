#include<stdio.h>
void main() {

	int num;

	// scanf : 값 입력받기
	scanf("%d", &num);  // scanf에 주소 작성 시 변수 앞에 &(주소연산자)를 붙여줘야 함.
	printf("num = %d\n\n", num); // printf는 변수의 주소가 아닌 저장된 값을 보는 것이기 때문에 &(주소연산자)를 붙이지 않음.
	// scanf_s 오류 해결 : 프로젝트 -> 속성 -> C -> 전처리기 정의 -> '_CRT_SECURE_NO_WARNINGS'로 수정


	// 산술 연산 + - * / %
	// INT 연산 10 / 3 = 3 (몫)
	// MOD 연산 10 % 3 = 1 (나머지)
	int a, b;
	printf("두 정수를 입력하세요.");
	scanf("%d%d", &a, &b);  // ""안에는 공백이나 특수문자 쓰지 않음.
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
}