#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rsp(int user) {
	
	static int winCnt = 0;  // 게임 횟수 카운트

	int com = rand() % 3 + 1;
	printf("computer: %d\n", com);
	if (user == com) { 
		printf("비겼습니다!\n");
	}
	else if (com == user - 1 || com - 2 == user) {  // (com % 3 + 1 == user)
		winCnt++;
		printf("이겼습니다*^o^*\n");
	}
	else if (user == com - 1 || user - 2 == com) {
		printf("졌습니다ㅠㅠ\n");
	}
	printf("현재 누적 %승중!\n\n", winCnt);
}

void main() {
	srand(time(NULL));
	// 가위 바위 보 10번 진행  1 - 가위 2 - 바위 3 - 보
	int user;
	int cnt = 0;

	while (cnt < 10) {
		printf("가위(1) 바위(2) 보(3)를 선택하세요.");
		scanf("%d", &user);

		if (user < 1 || 3 < user) {
			printf("다시 입력하세요.\n");
			continue;
		}
		
		rsp(user);
		printf("남은 게임 횟수: %d회\n", 9 - cnt);
		cnt++;
	}

}