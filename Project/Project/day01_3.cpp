#include<stdio.h>
#define RATE 1.23 // ����� ���� ��� == ��ȣ ��� : ����ڰ� ����� ������ (Ÿ�� ����), ����� ��ü������ �빮�ڷ� ǥ��
void main() {
	double r = 1.1;
	const double PI = 3.14; // const == �ɺ��� ��� : ���� ���ȭ. ����� ���Ŀ��� ���� ������ �� ����(�ڹ��� static final�� ����)
	double size = r * r * PI;
	printf("%lf", size);
}

