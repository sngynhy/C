#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {

	srand(time(NULL));

	char arr[5];


	// ���ڸ� �Է� �޾Ƽ� ó���ϴ� ���
	int i = 0;
	while (i<5) {
		char c;
		printf("�ҹ��� �Է�: ");
		scanf(" c", &c);

		if ('a' <= c && c <= 'z') {
			arr[i] = c;
			i++;
		}
		else if ('A' <= c && c <= 'Z') {
			c += 32;
			arr[i] = c;
			i++;
		}
		else {
			printf("���Է�: ");
		}
		/*if (i == 5) {  // while (1) - ���� ������ ��� �������� �ʿ�!
			break;
		}*/
	}
	

	// ���ڸ� �������� �̾Ƽ� ó���ϴ� ���
	for (int i = 0; i < 5; i++) {
		arr[i] = rand() % 26 + 97; // 97~122
	}

	for (int i = 0; i < 5; i++) {
		printf("%c ", arr[i]);
	}
	printf("\n"); 

	int numCnt[26] = { 0 }; // [0 0 0 0 0 0 0 0 0 ... 0]
	for (int i = 0; i < 5; i++) {
		numCnt[arr[i] - 97]++;
		/*
		 if (arr[i] == 'a97') {
			numCnt[0]++;
		}
		else if (arr[i] == 'b98') {
			numCnt[1]++;
		}
		*/
	}
	for (int i = 0; i < 26; i++) {
		if (numCnt[i] == 0) {
			continue;
		}
		printf("%c: %d��\n", i+97, numCnt[i]);
	}

}