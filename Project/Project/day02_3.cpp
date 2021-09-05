#include<stdio.h>
void main() {
	// 자료형의 타입 변환
	int i = 3.14; // 소숫점 아래 숫자 버림. double -> int 자동 형변환
	printf("i=%d\n", i);

	double res = 3.14;
	int num = (int) res;  // 명시적 형변환. 데이터 손실
	printf("num=%d\n", num);

	int stu1 = 81;
	int stu2 = 80;
	int stu3 = 14;
	double avg = (double) (stu1 + stu2 + stu3) / 3;
	// a / b는 int형 연산이기 때문에 (double)로 강제 타입 변환 해주어야 소숫점 아래 수까지 리턴
	// 또는 (stu1 + stu2 + stu3) / 3.0 또는 (stu1 + stu2 + stu3) * 1.0 / 3도 가능
	printf("avg=%lf\n\n", avg);


	// 연습하기
	int score1, score2, score3, score4;
	
	printf("학생1의 중간고사 점수: ");
	scanf("%d", &score1);
	printf("학생1의 기말고사 점수: ");
	scanf("%d", &score2);
	
	double avg1 = (double)(score1 + score2) / 2;
	printf("학생1의 평균 점수는 %.2lf입니다.\n\n", avg1); // %.2lf : 소숫점 아래 두자리까지 출력

	printf("학생2의 중간고사 점수: ");
	scanf("%d", &score3);
	printf("학생2의 기말고사 점수: ");
	scanf("%d", &score4);

	double avg2 = (score3 + score4) / 2.0;
	printf("학생2의 평균 점수는 %lf입니다.\n\n", avg2);

	printf("점수가 더 높은 학생의 평균 점수는 %lf입니다.\n\n", avg1 > avg2 ? avg1 : avg2);
}