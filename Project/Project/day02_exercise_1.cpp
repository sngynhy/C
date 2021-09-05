#include<stdio.h>
void main() {
	
	double a;
	printf("실수를 입력하세요. ");
	scanf("%lf", &a);
	double abs = a * (-1);
	printf("입력한 실수의 절대값=%lf", abs);

}