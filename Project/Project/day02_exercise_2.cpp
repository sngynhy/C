#include<stdio.h>
void main() {
	int age;
	printf("���̸� �Է��ϼ���. ");
	scanf("%d", age);

	int price = 0;  // �Է¹��� �ʴ� ������ �ʱ�ȭ �ʿ�!
	if (9 <= age && age <= 19) {
		price = 1000;
	}
	else if (20 <= age && age <= 64) {
		price = 2000;
	}
	printf("������ %d���Դϴ�.\n", price);
}