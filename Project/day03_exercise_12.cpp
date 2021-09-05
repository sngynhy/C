#include<stdio.h>
void main() {
	
	// 2)
	// 정수 입력
	// 입력한 정수의 개수만큼 실수 입력
	// 실수들의 합과 평균 출력
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);

	int i = 0;
	double sum = 0.0;
	while (i < num) {
		double d;
		printf("실수를 입력하세요. ");
		scanf("%lf", &d);
		sum += d;
		i++;
	}
	double avg = sum / num;
	printf("실수의 합은 %fl이고, 평균은 %lf이다.", sum, avg);
}