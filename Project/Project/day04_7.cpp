#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SU 3
void main() {

	srand(time(NULL));

	int stu[SU];
	int cnt = 0;
	for (int i = 0; i < SU; i++) {
		int randNum = rand() % 101;
		stu[i] = randNum;
		printf("%d�� �л��� %d�� �Դϴ�.\n", i + 1, stu[i]);
		if (stu[i] >= 50) {
			cnt++;
		}
	}
	printf("%d", cnt);
}