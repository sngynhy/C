#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {

	// 문자열 배열 == 이차원 배열

	// 6글자를 가진 영단어 5개 저장
	// 랜덤으로 정답 단어 1개 선택
		/*
		______: a

		_a_a_a: b

		ba_a_a: c

		c(해당문자)는 없습니다.
		ba_a_a: n

		banana
		정답!!!
		*/
	// 3개 이상 틀리면 game over...

	char word[5][7] = {"banana","orange","cherry","cheese","carrot"};

	int num = rand() % 5;
	
	char res[]="______";
	char c;
	int life = 3;

	while (1) {
		printf("현재 목숨 \t");  // \t: tap간격 띄어쓰기
		for (int i = 0; i < life; i++) {
			printf("♡");
		}
		printf("\n");
		printf("%s : ", res);
		scanf(" %c", &c);
		
		int flag = 0; // c에 입력한 문자가 있는지 없는지 판별하는 flag변수 - 0(t), 1(f) boolean값
		/*
		flag 변수는 스위치 변수로 미리 true, false 값 둘중에 하나를 넣어놓고
		어떤 조건에 부합하면 flag의 기존 값을 반대로 바꿔준다.
		나중에 그값을 비교해서 true나 false에 따라서 처리가 달라지도록 하귀 위함!
		*/

		// 글자의 개수 == 6번 반복됨
		for (int i = 0; i < 6; i++) {
			if (word[num][i] == c) {  // 랜덤 선택 단어 == word[num]
				// 그 단어의 글자 == word[num][i]
				flag = 1; // 입력한 문자를 찾으면 true(ON) 처리
				res[i] = c;
			}
			// 글자의 개수 == 6번 반복됨
		}
		if (flag == 0) { // 입력한 문자가 없는 경우 flag == 0
			life--;
			printf("%c는 없는 문자입니다.\n", c);
		}

		if (strcmp(res, word[num]) == 0) { // strcmp() : string 비교 함수  (str=="house")
			printf("정답!!!\n\n");
			break;
		}
		else if (life == 0) {
			printf("GAME OVER..\n");
			printf("정답은 %s입니다.\n", word[num]);
			break;
		}
	}


}