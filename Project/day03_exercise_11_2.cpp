#include<stdio.h>
void main() {

	// do-while������ Ǯ��

	int num;  // do-while�������� ��ó�� ���������� num���� �̸� �ް� ���ǹ��� ����Ǳ� ������ �ʱ�ȭ ���ʿ�!
	do {
		printf("�����Է�: ");
		scanf("%d", &num);
	} while (num < 1 || num < 10);

	int i = 1;
	int cnt = 0; // ���� Ƚ�� ī���� ����
	while (i <= 100) {
		if (i % num == 0) {
			printf("%d ", i);
			cnt++;
		}
		i++;
	}
	printf("\n%d�� ����� %d�� �Դϴ�.\n\n", num, cnt);
}