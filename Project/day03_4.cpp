#include<stdio.h>
void main() {
	
	int i = 0;
	while (1) { // while(true)�� ����. C���� true�� 1�� �� -> ���ѷ���
		// while ���ѷ��� -> ��������θ� ���α׷� �����ų �� ����.
		// ���� "���� ����"�� �����ؾ��Ѵ�. => break; �̿�
		printf("�ȳ�!\n");
		i++;
		if (i == 5) { // ���� ����
			break; // ��� ���� "�ݺ���"�� �ٱ����� Ż���Ű�� ���  14���������� Ż��!
		}
	}

	int number = 1;
	while (1) {
		printf("%d", number);
		number++;
		if (number == 100) {
			break;
		}
	}

	int menu;
	while (1) {
		printf("1~3�߿��� ����: ");
		scanf("%d", &menu);
		if (1 <= menu && menu <= 3) {
			break;
		}
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}

}