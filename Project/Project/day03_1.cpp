#include<stdio.h>
void main() {
	
	/*
	제어문
	 - 조건문
		if문 - 범위 체크
		switch문 - 자판기식 수행
	*/

	int num;
	printf("정수입력: ");
	scanf("%d", &num);
	
	switch (num) { // 괄호 안에는 조건식 대신 주로 변수, 값
	case 0: 
		printf("영\n");
		break; // break가 없으면 아래 case도 실행
	case 1: // (if문의 else if 역할)
		printf("일\n");
		break;
	default: // default는 위의 case에 모두 해당되지 않는 경우 실행 - 유효성 검사(if문의 else 역할)
		printf("0 과 1 이외의 정수\n");
	}

	switch (num % 2) {
	case 0:
		printf("짝수\n");
		break;
	case 1:
		printf("홀수\n");
		break;
	}
}