#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rsp(int user) {
	
	static int winCnt = 0;  // ���� Ƚ�� ī��Ʈ

	int com = rand() % 3 + 1;
	printf("computer: %d\n", com);
	if (user == com) { 
		printf("�����ϴ�!\n");
	}
	else if (com == user - 1 || com - 2 == user) {  // (com % 3 + 1 == user)
		winCnt++;
		printf("�̰���ϴ�*^o^*\n");
	}
	else if (user == com - 1 || user - 2 == com) {
		printf("�����ϴ٤Ф�\n");
	}
	printf("���� ���� %����!\n\n", winCnt);
}

void main() {
	srand(time(NULL));
	// ���� ���� �� 10�� ����  1 - ���� 2 - ���� 3 - ��
	int user;
	int cnt = 0;

	while (cnt < 10) {
		printf("����(1) ����(2) ��(3)�� �����ϼ���.");
		scanf("%d", &user);

		if (user < 1 || 3 < user) {
			printf("�ٽ� �Է��ϼ���.\n");
			continue;
		}
		
		rsp(user);
		printf("���� ���� Ƚ��: %dȸ\n", 9 - cnt);
		cnt++;
	}

}