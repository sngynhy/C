#include<stdio.h>
void main() {
	
	int i = 0;
	while (1) { // while(true)와 같음. C언어는 true를 1로 씀 -> 무한루프
		// while 무한루프 -> 강제종료로만 프로그램 종료시킬 수 있음.
		// 따라서 "종료 조건"을 설정해야한다. => break; 이용
		printf("안녕!\n");
		i++;
		if (i == 5) { // 종료 조건
			break; // 즉시 가장 "반복문"의 바깥으로 탈출시키는 제어문  14번라인으ㅗ 탈출!
		}
	}

	int number = 1;
	while (1) {
		printf("%d", number);
		number++;
		if (number == 100) {
			break;
		}
	}

	int menu;
	while (1) {
		printf("1~3중에서 선택: ");
		scanf("%d", &menu);
		if (1 <= menu && menu <= 3) {
			break;
		}
		printf("잘못 입력하셨습니다.\n");
	}

}