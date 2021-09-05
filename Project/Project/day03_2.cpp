#include<stdio.h>
void main() {
	
	/*
	제어문
	 - 반복문
		for문 - 수행 횟수(또는 범위)가 분명할 때 실행
		while문 - 수행 횟수가 불분명 할 때 실행 (조건을 만족할 때까지 무한루프)
	*/

	/*
	반복문의 중요성
	 1. 처리 속도
	 2. 한번의 호출(코드작성)로 여러 번의 동작 수행
	 3. 코드 가독성 증가
	 4. 비용 절감
	*/

	int i = 1;
	while (i <= 3) {
		printf("안녕!\n");
		i++;
	}
	printf("i=%d\n\n", i);


	int num = 1;
	int sum = 0;
	while (num <= 10) {
		sum += num;
		num++;
	}
	printf("sum=%d\n\n", sum);


	char c = 'a';
	while (c <= 'z') {
		printf("%c ", c);
		c++;
	}
	printf("\n\n");

	int j = 1;
	while (j < 11) {
		if (j % 2 == 1) {
			printf("%d ", j);
			//j++;  // 무한루프
		}
		j++;
	}
	printf("\n\n");
	

	int cnt, num2;
	printf("1차 입력: ");
	scanf("%d", &cnt);

	int a = 1; // 반복문의 수행 횟수를 컨트롤하는 변수
	while (a <= cnt) {
		printf("정수 입력: ");
		scanf("%d", &num2);
		a++;
	}

}