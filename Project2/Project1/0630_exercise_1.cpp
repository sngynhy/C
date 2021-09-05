#include<stdio.h>
#include<stdlib.h>
/* 1)
정수입력: 10
정수입력 : 20
연산자 입력: '+' or '-' 중 하나만 입력, 잘못 입력 시 재입력
+: 두 수의 합 출력, -: 두 수의 차 출력
*/
int func(int x, int y, char c) {
	int res;
	if (c == '+') {
		res = x + y;
	}
	else if (c == '-') {
		res = x - y;
	}
	return res;
}

// 2) 정수 2개 입력: 15 17
// 15~17까지 수의 합을 return값으로 출력!
int func2(int x, int y) {
	if (y < x) {
		int tmp = x;
		y = x;
		y = tmp;
	}
	int sum = 0;
	for (int i = x; i <= y; i++) {
		sum += i;
	}
	return sum;
}

// 3-1) 학생의 점수를 채점하는 함수
int func2() {
	return rand() & 101;
}

// 3-2) 학생의 등급을 결정하는 함수

char func3(int score) {
	char grade;
	if (90 < score) {
		grade = 'A';
	}
	else if (70 < score) {
		grade = 'B';
	}
	else if (60 < score) {
		grade = 'C';
	}
	else {
		grade = 'F';
	}
	return grade;
}

void main() {

	int a, b;
	char c;
	
	/*
	while (1) {
		printf("정수 입력: ");
		scanf("%d", &a);
		printf("정수 입력: ");
		scanf("%d", &b);
		printf("'+' 또는 '-' 입력: ");
		scanf(" %c", &c);
		if ((c != '+') && (c != '-')) {
			printf("잘못 입력되었습니다.\n");
		}
		else {
			int res = func(a, b, c);
			printf("%d\n\n", res);
			break;
		}
	}
	*/
	
	do {
		printf("정수 입력: ");
		scanf("%d", &a);
		printf("정수 입력: ");
		scanf("%d", &b);
		printf("'+' 또는 '-' 입력: ");
		scanf(" %c", &c);
		int res = func(a, b, c);
		printf("%d\n", res);
	} while ((c != '+') && (c != '-'));  // (!(c=='+'||c=='-'));
	printf("\n\n");


	// 2) 정수 2개 입력: 15 17
	// 15~17까지 수의 합을 return값으로 출력!
	int x, y;
	printf("두 정수를 입력하세요: ");
	scanf("%d%d", &x, &y);
	printf("%d", func2(x, y));
	printf("\n\n");


	// 3) 학생 5명이 있습니다.
	// 각 학생은 1번 시험을 봅니다. 점수는 0~100으로 랜덤 저장
	// 점수가 0~60 F / 61~70 C / 71~90 B / 91~100 A
	// [학생의 점수를 채점하는 함수]와 [학생의 등급을 결정하는 함수]
	int stu[5];
	char stuGrade[5];
	for (int i = 0; i < 5; i++) {  // 채점
		stu[i] = func2();
	}

	for (int i = 0; i < 5; i++) {  // 등급 매기기
		stuGrade[i] = func3(stu[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%d번학생은 %d점으로 %c등급입니다.\n", i + 1, stu[i], stuGrade[i]);
	}
}