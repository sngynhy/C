#include<stdio.h>
void main() {
	// �ݺ��� (for��)

	// 1)
	int num;
	printf("������ �Է��ϼ���. ");
	scanf("%d", &num);

	if (num < 0) {  // ������ ��� -1�� ���Ͽ� ����� ó��
		num *= (-1);
	}

	int sum = 0;
	for (int i = 0; i <= num; i++) {
		printf("%d ", i);
		sum += i;
	}
	printf("���� %d\n", sum);


	// 2)
	int a, b;
	printf("�� ������ �Է��ϼ���. ");
	scanf("%d%d", &a, &b);

	if (a > b) {  // a�� b�� �� ��ȯ
		int tmp = a;
		a = b;
		b = tmp;
	}

	/*for (a; a <= b; a++)  // a ~ b �ϳ��� �����ϸ� ���
		printf("%d ", a);
	}
	printf("\n\n");*/

	for (b; a <= b; b--) {  // b ~ a �ϳ��� �����ϸ� ���
		printf("%d ", b);
	}
	printf("\n\n");

	// 3)
	char al;
	printf("�� ���� ���ڸ� �Է��ϼ���. ");
	scanf(" %c", &al);

	if (al < 97) {  // �빮�� -> �ҹ��ڷ� ����
		al += 32;
	}
	for (char c = 'a'; c <= al; c++) {
		printf("%c ", c);
	}

}