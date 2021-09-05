#include<stdio.h>
void main() {
	
	int i;
	char c;
	
	printf("정수입력: ");
	scanf("%d", &i);
	
	printf("문자입력: ");
	scanf(" %c", &c);   // 앞의 공백은 정수 입력 후 함께 입력된 엔터를 지워줌 - 웬만하면 %c앞에는 공백 주기
	// 버퍼 : 중간 저장 공간
	printf("i=%d   c=%c\n", i, c);
}