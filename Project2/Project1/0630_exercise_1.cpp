#include<stdio.h>
#include<stdlib.h>
/* 1)
�����Է�: 10
�����Է� : 20
������ �Է�: '+' or '-' �� �ϳ��� �Է�, �߸� �Է� �� ���Է�
+: �� ���� �� ���, -: �� ���� �� ���
*/
int func(int x, int y, char c) {
	int res;
	if (c == '+') {
		res = x + y;
	}
	else if (c == '-') {
		res = x - y;
	}
	return res;
}

// 2) ���� 2�� �Է�: 15 17
// 15~17���� ���� ���� return������ ���!
int func2(int x, int y) {
	if (y < x) {
		int tmp = x;
		y = x;
		y = tmp;
	}
	int sum = 0;
	for (int i = x; i <= y; i++) {
		sum += i;
	}
	return sum;
}

// 3-1) �л��� ������ ä���ϴ� �Լ�
int func2() {
	return rand() & 101;
}

// 3-2) �л��� ����� �����ϴ� �Լ�

char func3(int score) {
	char grade;
	if (90 < score) {
		grade = 'A';
	}
	else if (70 < score) {
		grade = 'B';
	}
	else if (60 < score) {
		grade = 'C';
	}
	else {
		grade = 'F';
	}
	return grade;
}

void main() {

	int a, b;
	char c;
	
	/*
	while (1) {
		printf("���� �Է�: ");
		scanf("%d", &a);
		printf("���� �Է�: ");
		scanf("%d", &b);
		printf("'+' �Ǵ� '-' �Է�: ");
		scanf(" %c", &c);
		if ((c != '+') && (c != '-')) {
			printf("�߸� �ԷµǾ����ϴ�.\n");
		}
		else {
			int res = func(a, b, c);
			printf("%d\n\n", res);
			break;
		}
	}
	*/
	
	do {
		printf("���� �Է�: ");
		scanf("%d", &a);
		printf("���� �Է�: ");
		scanf("%d", &b);
		printf("'+' �Ǵ� '-' �Է�: ");
		scanf(" %c", &c);
		int res = func(a, b, c);
		printf("%d\n", res);
	} while ((c != '+') && (c != '-'));  // (!(c=='+'||c=='-'));
	printf("\n\n");


	// 2) ���� 2�� �Է�: 15 17
	// 15~17���� ���� ���� return������ ���!
	int x, y;
	printf("�� ������ �Է��ϼ���: ");
	scanf("%d%d", &x, &y);
	printf("%d", func2(x, y));
	printf("\n\n");


	// 3) �л� 5���� �ֽ��ϴ�.
	// �� �л��� 1�� ������ ���ϴ�. ������ 0~100���� ���� ����
	// ������ 0~60 F / 61~70 C / 71~90 B / 91~100 A
	// [�л��� ������ ä���ϴ� �Լ�]�� [�л��� ����� �����ϴ� �Լ�]
	int stu[5];
	char stuGrade[5];
	for (int i = 0; i < 5; i++) {  // ä��
		stu[i] = func2();
	}

	for (int i = 0; i < 5; i++) {  // ��� �ű��
		stuGrade[i] = func3(stu[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%d���л��� %d������ %c����Դϴ�.\n", i + 1, stu[i], stuGrade[i]);
	}
}