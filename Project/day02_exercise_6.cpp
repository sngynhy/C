#include<stdio.h>
void main() {
	
	char color;
	printf("���� �Է��ϼ���. ");
	scanf(" %c", &color);

	if (color == 'R' || color == 'r') {
		printf("����!\n");
	}
	else if (color == 'Y' || color == 'y') {
		printf("����!\n");
	}
	else if (color == 'G' || color == 'g') {
		printf("���!\n");
	}
	else {
		printf("���� ���Դϴ�.\n");
	}
}