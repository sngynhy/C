#include<stdio.h>
void main() {

	// 1)
	int month;
	printf("���� �Է��ϼ���. ");
	scanf("%d", &month);

	switch (month) {
	case 3:
	case 4:
	case 5:
		printf("��\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;
	case 12:
	case 1:
	case 2:
		printf("�ܿ�\n");
		break;
	default:
		printf("�߸��� �Է��Դϴ�.\n");
	}

	// 2)
	int score;
	printf("������ �Է��ϼ���. ");
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
		printf("�߸��� �Է��Դϴ�.\n");
	}
	
	

	// 3)
	int a, b;
	char op;
	printf("���� ���� ������ �Է��ϼ���. ");
	scanf("%d %c%d", &a, &op, &b);

	int res = 0; // ���� ���Ŀ� ������ ���� �־��� ��� �ʱ�ȭ ���ִ°� ����.
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
		printf("�߸��� �Է��Դϴ�.\n");
	}
	printf("%d\n", res);

	// 4)
	char color;
	printf("���� �Է��ϼ���. ");
	scanf(" %c", &color);

	switch (color) {
	case 'R':
	case 'r':
		printf("����!\n");
		break;
	case 'Y':
	case 'y':
		printf("����!\n");
		break;
	case 'G':
	case 'g':
		printf("���!\n");
		break;
	default:
		printf("�߸��� �Է��Դϴ�.\n");
	}
}