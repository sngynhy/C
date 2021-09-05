#include<stdio.h>
void main() {

	// 1)
	int num;
	printf("정수 1개 입력: ");
	scanf("%d", &num);

	int i = 1;
	int sum = 0;

	if (num < 0) {
		num *= (-1);  // 입력 값이 음수인 경우에 양수로 변경
	}
	while (i <= num) {
		sum += i;
		i++;
	}
	printf("답은 %d\n\n", sum);


	// 2)
	int a, b;
	printf("정수 2개 입력: ");
	scanf("%d%d", &a, &b);
	
	if (a > b) {
		// a와 b의 값을 "교환"
		// [교환 알고리즘]
		//  -> 임시 저장 변수 : tmp, temp
		int tmp = a;
		a = b; // a값을 b의 값으로 변경
		b = tmp; // b값을 a값이 저장되어 있는 tmp값으로 즉, a값으로 변경
	}
	int j = a;
	int sum2 = 0;
	while (j <= b) {
		printf("%d ", j);
		sum2 += j;
		j++;
	}
	printf("총합: %d\n", sum2);
	double avg = (double) sum2 / (b - a + 1);
	printf("평균: %fl\n\n", avg);

	//int min = a < b ? a : b;
	//int max = a > b ? a : b;
	//int j = min;
	//while (j <= max) {
	//	printf("%d ", j);
	//	j++;
	//}


	// 3)
	char al = 'a'; // a == 97, A == 65
	while (al <= 'z') {
		switch (al % 2) {
		case 0:
			// 대문자로 변경하여 출력
			printf("%c", al - 32);
			break;
		case 1:
			printf("%c", al);
		}
		al++;
	}


	// 4, 5)
	int n = 0;
	int cnt2 = 0, sum3 = 0;
	while (n < 5) {
		int k;
		printf("정수입력: ");
		scanf("%d", &n);
		if (n % 2 == 1) {
			// 홀수인 경우 합
			sum3 += n;
		}
		else {
			// 짝수인 경우 카운트
			cnt2++;
		}
		k++;
	}
	printf("짝수: %d개 홀수합: %d\n", cnt2, sum3);
}