#include<stdio.h>
void main() {

	// 2)���� �ð��Է�: 12
			/*���� �� �Է� : 5
			(�̶�, �ð��� 1~12 �Է¸� ����
					���� 0~59�� �Է°���
			12�� 5�� ��  1�ð�30���� �ð��� 10�� 35���Դϴ�.*/
	int hour, minute;

	// do-while�� : �߸� �Է��ϸ� �ٽ�(����� �Էµɶ����� ���)
	do {
		printf("���� �� �Է�: ");
		scanf("&d", &hour);
	} while (hour < 1 || 12 < hour);

	// while(1) ���ѷ��� - ����� �Է��ϸ� ���� (+ ���� ���� �ʿ�!)
	while (1) {
		printf("���� �� �Է�: ");
		scanf("%d", &minute);
		if (0 <= minute && minute <= 59) {  // ���� ����
			break;
		}
	}
	printf("%d�� %d�� 1�ð� 30�� �� �ð���\n", hour, minute);

	hour--;
	minute -= 30;

	if (minute < 0) {
		minute += 60;
		hour--;
	}

	if (hour <= 0) {
		hour += 12;
	}

	printf("%d�� %d�� �Դϴ�.\n", hour, minute);


	int h, m;
	// do-while��
	//  : �߸��Է��ϸ� ���(�ٽ�)
	do {
		printf("���� �ð��Է�: ");
		scanf("%d", &h);
	} while (h < 1 || 12 < h);

	// while(1) == ���ѷ�����
	// ����� �Է��ϸ� ����
	// == �����Է��Ҷ����� ���
	while (1) { // + �������� �ʿ�!!!
		printf("���� �� �Է�: ");
		scanf("%d", &m);
		if (0 <= m && m < 60) {
			break;
		}
	}

	printf("%d�� %d���� 1�ð�30���� �ð��� ", h, m);

	m -= 30;
	h--;

	if (m < 0) {
		m += 60;
		h--;
	}

	if (h <= 0) {
		h += 12;
	}

	printf("%d�� %d���Դϴ�.\n", h, m);


}