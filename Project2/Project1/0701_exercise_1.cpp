#include<stdio.h>
void main() {

	// 0 �̻��� ������ ������ ����Ǿ� �ִ� ���� input.txt
	// ���Ͽ� ����� ������
	// 1.���� 2.���(�Ҽ���.2) 3.�ִ밪�� �ۼ��� output.txt �ۼ�

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

	fprintf(out, "1.����=%d  2.���=%.2lf  3.�ִ밪=%d", sum, avg, max);

	fclose(in);
	fclose(out);
	printf("��������\n");
}