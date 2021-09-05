#include<stdio.h>
void main() {

	// while문
	//  - 선조건 후처리문 : 수행 횟수를 정확히 모를 때 사용

	// do-while문
	//  - 후처리 후조건문
	

	int i = 1;
	do {
		printf("안녕하세요!\n");   // 선처리
		i++;
	} while (i < 3);  // 후조건



	int menu;
	printf("♤어서오세요!~~♤\n");
	printf("===메뉴 목록===\n");
	printf("1.아메리카노\n");
	printf("2.카페라떼\n");
	printf("3.아인슈페너\n");
	printf("4.프라푸치노\n");
	do {
		printf("메뉴입력: ");
		scanf("%d", &menu);
	} while (menu < 1 || 4 < menu);

	printf("주문완료!\n");


	int mn, cnt;
	printf("<김밥천국>\n");
	printf("1.김밥 2000원\n");
	printf("2.라면 1500원\n");
	printf("3.떡볶이 3000원\n");
	do {
		printf("메뉴를 선택하세요.\n");
		scanf("%d", &mn);
	} while (mn < 1 || 3 < mn);
	printf("개수 입력: ");
	scanf("%d", &cnt);
	if (cnt <= 0) {
		return;
	}
	int price = 0;
	switch (mn) {
	case 1:
		price = 2000;
	case 2:
		price = 1500;
	case 3:
		price = 3000;
	}
	price *= cnt;
	printf("가격은 %d원입니다.\n", &price);
}