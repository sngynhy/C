#include<stdio.h>
void numChange(int* num) {
	*num = 100;
	printf("%d\n\n", *num);
}

void func(int* stu, int len) {
	int max = stu[0];
	int num = 1;
	for (int i = 1; i < len; i++) {
		if (max < stu[i]) {
			max = stu[i];
			num = i+1;
		}
	}
	printf("1등 학생: %d번 %d점\n",num, max);
}

void main() {

	int num = 10;
	numChange(&num);


	int stu[5] = { 10, 40, 50, 30, 20 };

	func(stu, 5);
}