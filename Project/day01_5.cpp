#include<stdio.h>
void main() {
	
	int i;
	char c;
	
	printf("�����Է�: ");
	scanf("%d", &i);
	
	printf("�����Է�: ");
	scanf(" %c", &c);   // ���� ������ ���� �Է� �� �Բ� �Էµ� ���͸� ������ - �����ϸ� %c�տ��� ���� �ֱ�
	// ���� : �߰� ���� ����
	printf("i=%d   c=%c\n", i, c);
}