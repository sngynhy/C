#include<stdio.h>
void main() {
	char c;
	printf("소문자를 입력하세요");
	scanf(" %c", &c);
	printf("%c(%d)를 대문자로 바꾸면 %c(%d)입니다", c, c, c-32, c-32);

}