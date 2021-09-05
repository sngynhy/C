#include<stdio.h>

int func(int num) {
	num += 10;
	return num;  // return : 함수를 호출 한 곳으로 결과값 반환 후 메소드 즉시 종료 (결과값은 반드시 하나여야 함. 여러 개가 될 수 없음)
}

double func2(double a, double b) {
	return a + b;
}

void main() { // main() 함수 : 프로그램을 실행시키는 함수

	int x = 2;
	x = func(x);
	printf("%d\n", x);


	// 실수 2개 입력
	// 파라미터로 실수 2개를 받아 두 실수를 더한 값을 반환하는 함수 작성
	// 단, return된 값은 double res에 따로 저장하여 출력
	double a, b;
	printf("실수 2개 입력: ");
	scanf("%lf%lf", &a, &b);
	double res = func2(a, b);
	printf("%lf\n", res);

}