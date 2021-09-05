#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SU 3
void main() {

	srand(time(NULL));
	int randNum = rand() % 101;
	printf("%d\n", randNum);

	// 크기가 5인 배열 생성
	// 평균값을 실수로 출력
	
	int stu[SU];  // ★★배열의 길이로는 변수가 아닌 "상수"로 들어가야함!!!! - 배열은 정적 타입이므로!!
	for (int i = 0; i < SU; i++) {
//		stu[i] = rand() % 101;
		printf("학생성적입력: ");
		scanf("%d", &stu[i]);

	}
	for (int i = 0; i < SU; i++) {
		printf("%d번 학생은 %d점 입니다.\n", i + 1, stu[i]);
	}
	int sum = 0;
	for (int i = 0; i < SU; i++) {
		sum += stu[i];
	}
	double avg = (double)sum / SU;
	printf("평균 점수는 %.2lf점 입니다\n.", avg);

}