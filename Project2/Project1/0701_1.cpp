#include<stdio.h>
void main() {

	char str[8];
	printf("7������ ���ܾ �Է��ϼ���. ");
	scanf("%s", str);  // �迭�� �ּ� ������(&) ������ �ʴ´�.

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
		printf("%c: %d��\n", al, cnt);
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