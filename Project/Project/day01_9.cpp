#include<stdio.h>
void main() {
	int a = -1, b = 0, c = 0, d = 2;
	int res = a + b + c + d;
	a++;
	b = ++c;
	d = b++ + ++d;
	res = c * 2;
	printf("a=%d b=%d c=%d d=%d res=%d\n\n", a, b, c, d, res);

	printf("비밀번호 입력: ______ \b\b\b\b\b\a");  // \a : 사운드삽입
	int pw;
	scanf("%d", &pw);
}