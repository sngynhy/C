#include<stdio.h>
void main() {

	char str[6];
	printf("���ڿ� �Է�: ");
	scanf("%s", str);
	
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);

	for (int i = 0; i < 5; i++) {
		str[i] += num;
		if (str[i] > 'z') {
			str[i] -= 26;
		}
	}
	printf("����� ���ڿ��� %s�Դϴ�.\n", str);
}