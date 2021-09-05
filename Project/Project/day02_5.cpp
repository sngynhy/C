#include<stdio.h>
void main() {

	/*
	제어문
	 - 조건문
		if문 - 범위 체크
		switch문 - 자판기식 수행

	 - 반복문
		for문 - 수행 횟수(또는 범위)가 분명할 때 실행
		while문 - 수행 횟수가 불분명 할 때 실행 (조건을 만족할 때까지 무한루프)
	*/

	int num;
	printf("정수입력: ");
	scanf("%d", &num);
	
	// 조건문 작성 시 구체적인 조건문을 위쪽에 작성한다.
	// if문 블록 내에서만 사용되는 변수는 if문 내에서 선언해주는 것이 좋다. - 메모리에서 if문 블록 내에 변수가 저장됨
	// if문 밖에 선언하면 메모리에 변수가 따로 저장되지만, if문 내에 선언하면 if문이 끝나는 동시에 if문 블록이 메모리에서 사라짐.
	if (num % 6 == 0) {
		printf("6의 배수\n");
	}
	else if (num % 2 == 0) {
		printf("짝수\n");
	}
	else {  // 위의 식이 false일 때 실행
		printf("홀수\n");
	}


	int a, b;
	printf("두 정수를 입력하세요. ");
	scanf("%d%d", &a, &b);
	if (a > b) {
		printf("%d\n", a);
	}
	else if (a < b) {
		printf("%d\n", b);
	}
	else {
		printf("같은 값입니다.");
	}
}