#include<stdio.h>
void main() {

	char str[8];
	printf("7글자의 영단어를 입력하세요. ");
	scanf("%s", str);  // 배열은 주소 연산자(&) 붙이지 않는다.

	for (char al ='a'; al <= 'z'; al++) {
		int cnt = 0;
		for (int i = 0; i < 7; i++) {
			if (al == str[i]) {
				cnt++;
			}
		}
		if (cnt == 0) {
			continue;
		}
		printf("%c: %d개\n", al, cnt);
	}
	int alCnt[26] = { 0 };
	for (int i = 0; i < 7; i++) {
		alCnt[str[i] - 97]++;
	}
	for (int i = 0; i < 26; i++) {
		if (alCnt[i] == 0) {
			continue;
		}
		printf("%c: %d\n", i + 97, alCnt[i]);
	}
}