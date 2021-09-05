#include<stdio.h>
void main() {
	int age;
	printf("나이를 입력하세요. ");
	scanf("%d", age);

	int price = 0;  // 입력받지 않는 변수는 초기화 필요!
	if (9 <= age && age <= 19) {
		price = 1000;
	}
	else if (20 <= age && age <= 64) {
		price = 2000;
	}
	printf("가격은 %d원입니다.\n", price);
}