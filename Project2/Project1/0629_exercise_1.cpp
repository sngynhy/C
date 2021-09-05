#include<stdio.h>
void main() {

	// 1) 문자열 1개 입력 - 최대 9글자까지만 입력 (단, 일반 문자 a, B, ! ..만 입력)
	// 1-1) 소문자의 갯수
	// 1-2) 대문자를 소문자로 변경하여 출력
	char str[10];
	printf("문자열 입력: ");
	scanf("%s", str);
	
	int cnt = 0;
	for (int i = 0; i < 9; i++) {
		if ('a' <= str[i] && str[i] <= 'z') {
			cnt++;
		}
		else if ('A' <= str[i] && str[i] <= 'Z') {
			str[i] += 32;
		}
	}
	printf("소문자는 %d개\n", cnt);
	printf("변경된 문자열: %s\n", str);


	// 2) 이 시점에 문자 1개 입력(단일문자)
	// a~z가 아니라면 재입력 해주세요!
	// 입력한 문자의 개수 출력
	char c;

	while (1) {
		printf("문자열 입력: ");
		scanf(" %c", &c);

		if ('a' <= c && c <= 'z') {
			break;
		}

		printf("재입력!\n");
	}

	cnt = 0;  // 변수 재사용 - 리셋
	for (int i = 0; i < 9; i++) {
		if (c == str[i]) {
			cnt++;
		}
	}

	printf("%c는 %d개 있습니다.\n", c, cnt);
}