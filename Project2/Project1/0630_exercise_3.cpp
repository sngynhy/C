#include<stdio.h>
void f1(int n);
int isPrime(int n);
void f3(int x, int y);
void main() {

	// 로직을 추가한 함수 구현
	// 약수, 배수, 소수, 합성수, 최소공배수, 최대공약수

	// 1) 1 이상의 정수 입력 => 입력된 정수의 약수 출력하는 함수 구현
	int a;
	do {
		printf("1 이상의 정수를 입력하세요. ");
		scanf("%d", &a);
		f1(a);
	} while (a < 1);
	
	// 2) 2 이상의 정수 입력 => 입력된 정수가 소수인지 아닌지 출력하는 함수 구현
	int b;
	printf("2 이상의 정수를 입력하세요. ");
	scanf("%d", &b);
	if (isPrime(b)) {
		printf("%d는 소수입니다.\n\n", b);
	}
	else {
		printf("%d는 소수가 아닙니다.\n\n", b);
	}


	// 3) 1 이상의 정수 2개 입력 => 두 수의 최대공약수와 최소공배수 출력하는 함수 구현
	int x, y;
	printf("1 이상의 두 정수를 입력하세요. ");
	scanf("%d%d", &x, &y);
	f3(x, y);

}

void f1(int n) {
	printf("%d의 약수는 ", n);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			//arr[i - 1] = i;
			printf("%d, ", i);
		}
	}
	printf("입니다.\n\n");
}

int isPrime(int n) {
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cnt++;
		}
	}
	if (cnt == 2) {
		return 1;
	}
	else {
		return 0;
	}
	printf("\n\n");
}

void f3(int x, int y) {
	if (x > y) {  // 작은 수를 x로 고정
		int tmp = x;
		x = y;
		y = tmp;
	}
	for (int i = x; i >= 1; i--) {  // 작은 수를 기준으로!
		if (x % i == 0 && y % i==0) {
			printf("%d와 %d의 최대공약수는 %d입니다.\n", x, y, i);
			printf("%d와 %d의 최소공배수는 %d입니다.\n", x, y, x * y / i);  // 두 수의 곱 = 최대공약수*최소공배수
			break;
		}
	}
}