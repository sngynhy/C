#include<stdio.h>
#include<stdlib.h> // rand() 함수가 정의되어 있는 전처리기
#include<time.h>
void main() {

	// 난수 생성 함수 rand()
	// rand() % N : N으로 나누었을때의 나머지
	// 즉 0, 1, 2, 3, ... , N-1 까지의 정수 값
	// 처음 설정된 난수는 바뀌지 않는다.
	// 컴퓨터의 시드값(고유번호)를 참고함
	
	srand(time(NULL)); // srand() 함수는 무엇을 기준으로 할지 인자로 받는다. - time(NULL) 시간을 기준 인자로 받음
	// srand() 함수는 rand() 위쪽에 작성되어야 함

	//int dice = rand() % 6 + 1; // 1, 2, ... 6
	//int num = rand() % 51 + 50; // 0~50 + 50 = 50~100

	int randNum = rand() % 10 + 1;  // rand() % 10 = 0, 1, 2, 3, ... 9
	printf("randNum: %d\n", randNum);

}