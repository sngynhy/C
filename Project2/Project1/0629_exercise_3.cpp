#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {

	// ���ڿ� �迭 == ������ �迭

	// 6���ڸ� ���� ���ܾ� 5�� ����
	// �������� ���� �ܾ� 1�� ����
		/*
		______: a

		_a_a_a: b

		ba_a_a: c

		c(�ش繮��)�� �����ϴ�.
		ba_a_a: n

		banana
		����!!!
		*/
	// 3�� �̻� Ʋ���� game over...

	char word[5][7] = {"banana","orange","cherry","cheese","carrot"};

	int num = rand() % 5;
	
	char res[]="______";
	char c;
	int life = 3;

	while (1) {
		printf("���� ��� \t");  // \t: tap���� ����
		for (int i = 0; i < life; i++) {
			printf("��");
		}
		printf("\n");
		printf("%s : ", res);
		scanf(" %c", &c);
		
		int flag = 0; // c�� �Է��� ���ڰ� �ִ��� ������ �Ǻ��ϴ� flag���� - 0(t), 1(f) boolean��
		/*
		flag ������ ����ġ ������ �̸� true, false �� ���߿� �ϳ��� �־����
		� ���ǿ� �����ϸ� flag�� ���� ���� �ݴ�� �ٲ��ش�.
		���߿� �װ��� ���ؼ� true�� false�� ���� ó���� �޶������� �ϱ� ����!
		*/

		// ������ ���� == 6�� �ݺ���
		for (int i = 0; i < 6; i++) {
			if (word[num][i] == c) {  // ���� ���� �ܾ� == word[num]
				// �� �ܾ��� ���� == word[num][i]
				flag = 1; // �Է��� ���ڸ� ã���� true(ON) ó��
				res[i] = c;
			}
			// ������ ���� == 6�� �ݺ���
		}
		if (flag == 0) { // �Է��� ���ڰ� ���� ��� flag == 0
			life--;
			printf("%c�� ���� �����Դϴ�.\n", c);
		}

		if (strcmp(res, word[num]) == 0) { // strcmp() : string �� �Լ�  (str=="house")
			printf("����!!!\n\n");
			break;
		}
		else if (life == 0) {
			printf("GAME OVER..\n");
			printf("������ %s�Դϴ�.\n", word[num]);
			break;
		}
	}


}