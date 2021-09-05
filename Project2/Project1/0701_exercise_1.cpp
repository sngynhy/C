#include<stdio.h>
void main() {

	// 0 이상의 정수가 여러개 저장되어 있는 파일 input.txt
	// 파일에 저장된 정수의
	// 1.총합 2.평균(소수점.2) 3.최대값을 작성한 output.txt 작성

	FILE* in = fopen("input.txt", "r");
	FILE* out = fopen("output.txt", "w");

	int score;
	int sum = 0;
	int cnt = 0;
	int max = 0;

	while (!feof(in)) {
		fscanf(in, "%d", &score);
		sum += score;
		cnt++;
		if (max < score) {
			max = score;
		}
	}
	double avg = (double) sum / cnt;

	fprintf(out, "1.총합=%d  2.평균=%.2lf  3.최대값=%d", sum, avg, max);

	fclose(in);
	fclose(out);
	printf("수행종료\n");
}