#include<stdio.h>
void main() {

	// 1) ���ڿ� 1�� �Է� - �ִ� 9���ڱ����� �Է� (��, �Ϲ� ���� a, B, ! ..�� �Է�)
	// 1-1) �ҹ����� ����
	// 1-2) �빮�ڸ� �ҹ��ڷ� �����Ͽ� ���
	char str[10];
	printf("���ڿ� �Է�: ");
	scanf("%s", str);
	
	int cnt = 0;
	for (int i = 0; i < 9; i++) {
		if ('a' <= str[i] && str[i] <= 'z') {
			cnt++;
		}
		else if ('A' <= str[i] && str[i] <= 'Z') {
			str[i] += 32;
		}
	}
	printf("�ҹ��ڴ� %d��\n", cnt);
	printf("����� ���ڿ�: %s\n", str);


	// 2) �� ������ ���� 1�� �Է�(���Ϲ���)
	// a~z�� �ƴ϶�� ���Է� ���ּ���!
	// �Է��� ������ ���� ���
	char c;

	while (1) {
		printf("���ڿ� �Է�: ");
		scanf(" %c", &c);

		if ('a' <= c && c <= 'z') {
			break;
		}

		printf("���Է�!\n");
	}

	cnt = 0;  // ���� ���� - ����
	for (int i = 0; i < 9; i++) {
		if (c == str[i]) {
			cnt++;
		}
	}

	printf("%c�� %d�� �ֽ��ϴ�.\n", c, cnt);
}