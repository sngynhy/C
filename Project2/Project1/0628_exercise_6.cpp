#include<stdio.h>
#include<Windows.h>
void main() {

	// 학생 3명, 시험 2번
	// 각 학생들의 시험 점수 평균(실수로)
	// 그리고 1등 학생의 "번호" 출력

	int stu[3][2];
	double stuAvg[3];

	for (int i = 0; i < 3; i++) {
		
		printf("채점중...");
		Sleep(300);
		
		int sum = 0;
		for (int j = 0; j < 2; j++) {
			stu[i][j] = rand() % 101;
			printf("%d점 ", stu[i][j]);
			sum += stu[i][j];
		}
		stuAvg[i] = sum / 2.0;
		printf("%d번 학생의 평균 점수는 %lf입니다.\n", i + 1, stuAvg[i]);
	}

	double max = stuAvg[0];
	int i;
	for (i = 1; i < 3; i++) {
		if (max < stuAvg[i]) {
			max = stuAvg[i];
		}
	}
	printf("%d ", i);
}