#include<stdio.h>
void main() {
	int month;
	printf("���� �Է��ϼ���. ");
	scanf("%d", &month);

	// ��ȿ�� �˻� : ����ڰ� �Է��� ���� �ùٸ� ������ 1�� �˻��ϴ� ��.
	if (1 <= month && month <= 12) {
		if (3 <= month && month <= 5) {
			printf("��\n");
		}
		else if (6 <= month && month <= 8) {
			printf("����\n");
		}
		else if (9 <= month && month <= 11) {
			printf("����\n");
		}
		else {
			printf("�ܿ�\n");
		}
	}
	else {
		printf("�߸� �Է� �Ǿ����ϴ�.");
	}
}