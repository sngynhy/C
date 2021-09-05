#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {

	srand(time(NULL));

	char arr[5];


	// 문자를 입력 받아서 처리하는 경우
	int i = 0;
	while (i<5) {
		char c;
		printf("소문자 입력: ");
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
			printf("재입력: ");
		}
		/*if (i == 5) {  // while (1) - 무한 루프인 경우 종료조건 필요!
			break;
		}*/
	}
	

	// 문자를 랜덤으로 뽑아서 처리하는 경우
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
		printf("%c: %d개\n", i+97, numCnt[i]);
	}

}