#include<stdio.h>
void main() {

	int score;
	printf("������ �Է��ϼ���. ");
	scanf("%d", &score);

	if (score < 0 || 100 < score) {
		printf("�߸� �Է� �Ǿ����ϴ�.\n");
	}
	else {
		if (score <= 50) {
			printf("F");
		}
		else if (score <= 60) {
			printf("C");
		}
		else if (score <= 70) {
			printf("B");
		}
		else {
			printf("A");
		}
	}
}