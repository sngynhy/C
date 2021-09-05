#include<stdio.h>
void main() {

	char str[6];
	printf("문자열 입력: ");
	scanf("%s", str);
	
	int num;
	printf("숫자 입력: ");
	scanf("%d", &num);

	for (int i = 0; i < 5; i++) {
		str[i] += num;
		if (str[i] > 'z') {
			str[i] -= 26;
		}
	}
	printf("변경된 문자열은 %s입니다.\n", str);
}