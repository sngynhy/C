#include<stdio.h>
void main() {

	// 2)현재 시간입력: 12
			/*현재 분 입력 : 5
			(이때, 시간은 1~12 입력만 가능
					분은 0~59만 입력가능
			12시 5분 의  1시간30분전 시간은 10시 35분입니다.*/
	int hour, minute;

	// do-while문 : 잘못 입력하면 다시(제대로 입력될때까지 계속)
	do {
		printf("현재 시 입력: ");
		scanf("&d", &hour);
	} while (hour < 1 || 12 < hour);

	// while(1) 무한루프 - 제대로 입력하면 종료 (+ 종료 조건 필요!)
	while (1) {
		printf("현재 분 입력: ");
		scanf("%d", &minute);
		if (0 <= minute && minute <= 59) {  // 종료 조건
			break;
		}
	}
	printf("%d시 %d의 1시간 30분 전 시간은\n", hour, minute);

	hour--;
	minute -= 30;

	if (minute < 0) {
		minute += 60;
		hour--;
	}

	if (hour <= 0) {
		hour += 12;
	}

	printf("%d시 %d분 입니다.\n", hour, minute);


	int h, m;
	// do-while문
	//  : 잘못입력하면 계속(다시)
	do {
		printf("현재 시간입력: ");
		scanf("%d", &h);
	} while (h < 1 || 12 < h);

	// while(1) == 무한루프문
	// 제대로 입력하면 종료
	// == 정상입력할때까지 계속
	while (1) { // + 종료조건 필요!!!
		printf("현재 분 입력: ");
		scanf("%d", &m);
		if (0 <= m && m < 60) {
			break;
		}
	}

	printf("%d시 %d분의 1시간30분전 시간은 ", h, m);

	m -= 30;
	h--;

	if (m < 0) {
		m += 60;
		h--;
	}

	if (h <= 0) {
		h += 12;
	}

	printf("%d시 %d분입니다.\n", h, m);


}