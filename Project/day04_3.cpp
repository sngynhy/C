#include<stdio.h>
void main() {

	// for + break, continue;

	for (int i = 0; i < 5; i++) {
		int num;
		printf("�����Է�: ");
		scanf("%d", &num);

		if (num < 0) {
			break; // 15�������� �̵�
		}
	}

	for (int i = 0; i < 5; i++) {
		int num;
		printf("�����Է�: ");
		scanf("%d", &num);

		// num�� ������� Ȧ¦�Ǻ����ϰ�;�
		// �ٵ� for�� ��ü�� �����ϰ������ �ʾ�..
		if (num < 0) {
			i--;
			continue;
			// while�� -> ���ǽ����� �̵�
			// for�� -> ���������� �̵�
		}

		if (num % 2 == 0) {
			printf("¦��\n");
		}
		else {
			printf("Ȧ��\n");
		}
	}
}