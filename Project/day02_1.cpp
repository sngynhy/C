#include<stdio.h> // 전처리기
void main() {
	int a, b, size;

	printf("직사각형의 가로의 길이를 입력하세요.");
	scanf("%d", &a);
	printf("직사각형의 세로의 길이를 입력하세요.");
	scanf("%d", &b);

	size = a * b;
	printf("직사각형의 넓이는 %d 입니다.\n", size);
}