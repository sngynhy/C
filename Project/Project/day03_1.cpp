#include<stdio.h>
void main() {
	
	/*
	���
	 - ���ǹ�
		if�� - ���� üũ
		switch�� - ���Ǳ�� ����
	*/

	int num;
	printf("�����Է�: ");
	scanf("%d", &num);
	
	switch (num) { // ��ȣ �ȿ��� ���ǽ� ��� �ַ� ����, ��
	case 0: 
		printf("��\n");
		break; // break�� ������ �Ʒ� case�� ����
	case 1: // (if���� else if ����)
		printf("��\n");
		break;
	default: // default�� ���� case�� ��� �ش���� �ʴ� ��� ���� - ��ȿ�� �˻�(if���� else ����)
		printf("0 �� 1 �̿��� ����\n");
	}

	switch (num % 2) {
	case 0:
		printf("¦��\n");
		break;
	case 1:
		printf("Ȧ��\n");
		break;
	}
}