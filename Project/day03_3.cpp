#include<stdio.h>
void main() {

	// while��
	//  - ������ ��ó���� : ���� Ƚ���� ��Ȯ�� �� �� ���

	// do-while��
	//  - ��ó�� �����ǹ�
	

	int i = 1;
	do {
		printf("�ȳ��ϼ���!\n");   // ��ó��
		i++;
	} while (i < 3);  // ������



	int menu;
	printf("���������!~~��\n");
	printf("===�޴� ���===\n");
	printf("1.�Ƹ޸�ī��\n");
	printf("2.ī���\n");
	printf("3.���ν����\n");
	printf("4.����Ǫġ��\n");
	do {
		printf("�޴��Է�: ");
		scanf("%d", &menu);
	} while (menu < 1 || 4 < menu);

	printf("�ֹ��Ϸ�!\n");


	int mn, cnt;
	printf("<���õ��>\n");
	printf("1.��� 2000��\n");
	printf("2.��� 1500��\n");
	printf("3.������ 3000��\n");
	do {
		printf("�޴��� �����ϼ���.\n");
		scanf("%d", &mn);
	} while (mn < 1 || 3 < mn);
	printf("���� �Է�: ");
	scanf("%d", &cnt);
	if (cnt <= 0) {
		return;
	}
	int price = 0;
	switch (mn) {
	case 1:
		price = 2000;
	case 2:
		price = 1500;
	case 3:
		price = 3000;
	}
	price *= cnt;
	printf("������ %d���Դϴ�.\n", &price);
}