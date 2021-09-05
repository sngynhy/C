#include<stdio.h>
void main() {
	char al;
	while (1) {  // 무한루프
		printf("문자 입력: ");
		scanf(" %c", &al);
		if (!('a'<=al && al<='z' || 'A'<=al && al<='Z')) {  // 종료조건
			break;
		}
		if ('a' <= al && al <= 'z') {
			printf("소문자 입력됨\n");
		}
		else {
			printf("대문자 입력됨\n");
		}
	}
}