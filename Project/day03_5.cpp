#include<stdio.h>
void main() {
	// break : "즉시" 반복문의 바깥으로 이동
	// continue : "즉시" 반복문의 처음으로 이동

	int num;
	while (1) {
		printf("정수 입력: ");
		scanf("%d", &num);
		if (num == 0) {
			break;  // "즉시" 멈추고 11번->22번 라인으로 빠져나감
		}

		// 아.. 양의 정수 안나왔으면 좋겠다...
		// 근데 프로그램이 멈추는 것도 싫어.. no break;....
		// "수행을 일부 멈추되, 전체 수행은 계속 해야하는 경우"
		if (num < 0) {
			continue;  // 18번 -> 7번 라인으로 "즉시" 이동
			//printf("확인!\n"); // continue, break 뒤에 작성된 코드 == 데드코드 == 수행되지 않는 코드
		}
		printf("양의 정수\n");
	}

	int i = 0;
	while (1) {
		i++; // 반복문의 루프를 컨트롤하는 변수의 위치가 중요!
		// 아.. 짝수일때는 출력하고싶지 않아..
		// 근데 멈추기도 싫어..
		if (i % 2 == 0) {
			continue;  // 30번->25번 라인으로 이동
		}
		if (i > 100) {  // 100까지만 출력하고싶어 101부터는 그만 할래
			break;
		}
		printf("%d ", i);
		//i++;
	}
	printf("\n\n");

}