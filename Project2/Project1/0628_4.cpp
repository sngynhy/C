#include<stdio.h>
void main() {

	// 이차원 배열 == DB 테이블

	int stu1[3] = { 10, 20, 30 };
	int stu2[3] = { 32, 14, 15 };

	int STU[2][3] = { { 10, 20, 30 } , { 32, 14, 15 } };

	for (int i = 0; i < 2; i++) {
		printf("==학생 %d의 성적==\n", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("%d점 ", STU[i][j]);
		}
		printf("\n");
	}

	// 성적기록부 만들기
	int stu[3][2];

	for (int a = 0; a < 3; a++) {
		printf("%d번 학생 점수 입력...\n", a + 1);

		for (int i = 0; i < 2; i++) {
			printf("시험 %d번 점수 입력: ", i + 1);
			scanf("%d", &stu[a][i]);
		}
		printf("점수 입력 완료!\n\n");
	}

	for (int a = 0; a < 3; a++) {
		for (int i = 0; i < 2; i++) {
			printf("%d점 ", stu[a][i]);
		}
	}
}