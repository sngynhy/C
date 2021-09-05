#include<stdio.h>
// 재귀 함수 == 순환 호출 -> "무한 루프"와 유사하므로 "종료 조건" 필수!
// : 어떤 함수가 기능을 수행하는 중에 자기 자신을 또 호출하는 함수, 현상
/* 예)
 n! = n * (n-1)!
 f(n) = n * f(n-1)
*/
int fac(int N) {
	if (N == 1) { // 종료 조건!
		return 1;
	}
	return N * fac(N - 1);
}
void main() {
	
	int res = fac(5);
	printf("5!은 %d입니다.\n", res);

	int i;
	printf("정수 1개 입력: ");
	scanf("%d", &i);
	printf("%d!은 %d입니다.\n", i, fac(i));

}