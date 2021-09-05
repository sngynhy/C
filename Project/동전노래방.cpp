#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h> // Sleep() 함수 정의되어 있음
void main() {
	// 동전 넣기
	// 노래 번호 입력
	// 노래 재생
	// 점수 출력
	// (수행반복)

	
	// 500원당 -> 1곡
	// 500원 미만 -> 잘못된 입력, 542원 -> 1곡, +42원은 반환됩니다. (coin-500)원

	// 노래 번호 1001~1999
	// 범위 밖이면 -> 없는 노래입니다. 확인해주세요. 출력
	// 노래 재생

	// 점수 랜덤 생성
	// 난수 생성 함수 rand() 0 ~ 100점
	//srand(time(NULL));
	//score = rand() % 101;
	//printf("%d\n", score);
	
	// 0~50 노력해야겠네요ㅠㅠ
	// 51~70 좋은 노래였습니다!
	// 71~100 내일의 가수왕!

	int coin, songNum, score, songCnt;

	srand(time(NULL));
	score = rand() % 101;

	printf("코인 넣기: ");
	scanf("%d", &coin);
	/*
	if (500 <= coin) {
		printf("%d원이 반환됩니다.\n", coin % 500);
		printf("노래 번호 입력: \n");
		scanf("%d", &songNum);
		if (1000 < songNum && songNum < 2000) {
			printf("노래가 재생중...");
			Sleep(500); // 1000당 1초 단위로 프로세스를 재운다.
			printf("♪");
			Sleep(500);
			printf("♬♪");
			Sleep(500);
			printf("♬♪♬\n");
			Sleep(500);
			if (score <= 50) {
				printf("%d점\n", score);
				printf("노력해야겠네요ㅠㅠ\n\n");
			}
			else if (score <= 70) {
				printf("%d점\n", score);
				printf("좋은노래였습니다!\n\n");
			}
			else {
				printf("%d점\n", score);
				printf("내일의 가수왕!\n\n");
			}
			printf("남은 코인: %d원\n", coin - 500);
			printf("남은 노래 수: %d곡\n\n", (coin - 500) / 500);
		}
		else {
			printf("없는 노래입니다. 확인해주세요/");
		}
	}
	else {
		printf("동전이 부족합니다.\n\n");
		return; // main() 메소드 즉시 강제 종료
	}
	*/
}