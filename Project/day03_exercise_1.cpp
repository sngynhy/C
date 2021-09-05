#include<stdio.h>
void main() {

	// 1)
	int month;
	printf("월을 입력하세요. ");
	scanf("%d", &month);

	switch (month) {
	case 3:
	case 4:
	case 5:
		printf("봄\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을\n");
		break;
	case 12:
	case 1:
	case 2:
		printf("겨울\n");
		break;
	default:
		printf("잘못된 입력입니다.\n");
	}

	// 2)
	int score;
	printf("점수를 입력하세요. ");
	scanf("%d", &score);
	
	switch (score/10) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
		printf("F\n");
		break;
	case 5:
	case 6:
		printf("C\n");
		break;
	case 7:
	case 8:
		printf("B\n");
		break;
	case 9:
	case 10:
		printf("A\n");
		break;
	default:
		printf("잘못된 입력입니다.\n");
	}
	
	

	// 3)
	int a, b;
	char op;
	printf("정수 문자 정수를 입력하세요. ");
	scanf("%d %c%d", &a, &op, &b);

	int res = 0; // 선언 이후에 변수에 값을 넣어줄 경우 초기화 해주는게 좋다.
	switch (op) {
	case '+':
		res = a + b;
		break;
	case '-':
		res = a - b;
		break;
	case 'x':
	case 'X':
	case '*':
		res = a * b;
		break;
	default:
		printf("잘못된 입력입니다.\n");
	}
	printf("%d\n", res);

	// 4)
	char color;
	printf("색을 입력하세요. ");
	scanf(" %c", &color);

	switch (color) {
	case 'R':
	case 'r':
		printf("정지!\n");
		break;
	case 'Y':
	case 'y':
		printf("주의!\n");
		break;
	case 'G':
	case 'g':
		printf("출발!\n");
		break;
	default:
		printf("잘못된 입력입니다.\n");
	}
}