// ※ cmd창이 뜨지 않을 때!
//	프로젝트->속성->링커->시스템->하위시스템:콘솔

// ※ scanf 오류!
//	프로젝트->속성->C/C++->전처리기->전처리기 정의: _CRT_SECURE_NO_WARNINGS 입력
#include<stdio.h>
void main() {

	// 1)
	int i;
	double sum = 0.0;
	
	printf("정수 입력: ");
	scanf("%d", &i);

	for (int j = 0; j < i; j++) {
		double d;
		printf("실수 입력%d: ", j + 1);
		scanf("%lf", &d);
		sum += d;
	}
	double avg = sum / i;
	printf("총합은 %lf이고, 평균은 %lf입니다.\n\n", sum, avg);

}