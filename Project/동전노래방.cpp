#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h> // Sleep() �Լ� ���ǵǾ� ����
void main() {
	// ���� �ֱ�
	// �뷡 ��ȣ �Է�
	// �뷡 ���
	// ���� ���
	// (����ݺ�)

	
	// 500���� -> 1��
	// 500�� �̸� -> �߸��� �Է�, 542�� -> 1��, +42���� ��ȯ�˴ϴ�. (coin-500)��

	// �뷡 ��ȣ 1001~1999
	// ���� ���̸� -> ���� �뷡�Դϴ�. Ȯ�����ּ���. ���
	// �뷡 ���

	// ���� ���� ����
	// ���� ���� �Լ� rand() 0 ~ 100��
	//srand(time(NULL));
	//score = rand() % 101;
	//printf("%d\n", score);
	
	// 0~50 ����ؾ߰ڳ׿�Ф�
	// 51~70 ���� �뷡�����ϴ�!
	// 71~100 ������ ������!

	int coin, songNum, score, songCnt;

	srand(time(NULL));
	score = rand() % 101;

	printf("���� �ֱ�: ");
	scanf("%d", &coin);
	/*
	if (500 <= coin) {
		printf("%d���� ��ȯ�˴ϴ�.\n", coin % 500);
		printf("�뷡 ��ȣ �Է�: \n");
		scanf("%d", &songNum);
		if (1000 < songNum && songNum < 2000) {
			printf("�뷡�� �����...");
			Sleep(500); // 1000�� 1�� ������ ���μ����� ����.
			printf("��");
			Sleep(500);
			printf("�ݢ�");
			Sleep(500);
			printf("�ݢܢ�\n");
			Sleep(500);
			if (score <= 50) {
				printf("%d��\n", score);
				printf("����ؾ߰ڳ׿�Ф�\n\n");
			}
			else if (score <= 70) {
				printf("%d��\n", score);
				printf("�����뷡�����ϴ�!\n\n");
			}
			else {
				printf("%d��\n", score);
				printf("������ ������!\n\n");
			}
			printf("���� ����: %d��\n", coin - 500);
			printf("���� �뷡 ��: %d��\n\n", (coin - 500) / 500);
		}
		else {
			printf("���� �뷡�Դϴ�. Ȯ�����ּ���/");
		}
	}
	else {
		printf("������ �����մϴ�.\n\n");
		return; // main() �޼ҵ� ��� ���� ����
	}
	*/
}