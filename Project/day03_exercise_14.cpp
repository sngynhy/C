#include<stdio.h>
void main() {
	char al;
	while (1) {  // ���ѷ���
		printf("���� �Է�: ");
		scanf(" %c", &al);
		if (!('a'<=al && al<='z' || 'A'<=al && al<='Z')) {  // ��������
			break;
		}
		if ('a' <= al && al <= 'z') {
			printf("�ҹ��� �Էµ�\n");
		}
		else {
			printf("�빮�� �Էµ�\n");
		}
	}
}