#include<stdio.h>
void main() {

	// "�̺а˻�" == "����Ž��"
	// ���� ���� : Ž���ϰ��� �ϴ� �迭�� ���ĵǾ� �־����!
	int data[10];
	printf("[");
	for (int i = 0; i < 10; i++){
		data[i] = i + 1;
		printf("%d ", data[i]);
	}
	printf("]\n");

	int value;
	printf("ã������ �� �Է�: ");
	scanf("%d", &value);

	int l = 0;
	int h = 9;

	while (l <= h) {  // l > h �� ���������� �߻��ϱ� ������ ����
		
		int m = (l + h) / 2;  // �ݺ������� ����

		// ���� ���� ����
		if (value == data[m]) {  // �迭�� �߾Ӱ��� ��
			printf("ã�Ҵ�!\n");
			break;
		}
		else if (value < data[m]) {
			printf("�ٿ�!\n");
			h = m - 1;
		}
		else {
			printf("��!\n");
			l = m + 1;
		}

	}
	if (l > h) { // ���� ���������� �߻��ߴٸ�
		printf("ã�� �� ����!\n");
	}
}