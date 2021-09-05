#include<stdio.h>
void main() {
	
	char color;
	printf("색을 입력하세요. ");
	scanf(" %c", &color);

	if (color == 'R' || color == 'r') {
		printf("정지!\n");
	}
	else if (color == 'Y' || color == 'y') {
		printf("주의!\n");
	}
	else if (color == 'G' || color == 'g') {
		printf("출발!\n");
	}
	else {
		printf("없는 색입니다.\n");
	}
}