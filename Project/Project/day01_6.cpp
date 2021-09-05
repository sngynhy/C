#include<stdio.h>
void main() {
	// char 문자
	// 아스키코드표에 매칭하여 저장
	char c1 = 'a';
	char c2 = 'A';
	int i = 66;
	
	printf("c1: %c %d\n", c1, c1);  // char 타입의 %d : 문자의 아스키코드 값 출력
	printf("c2: %c %d\n\n", c2, c2);
	printf("i: %c %d\n\n", i, i);
}