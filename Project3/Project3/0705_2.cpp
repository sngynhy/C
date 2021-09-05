#include<stdio.h>
void swap1(int a, int b) {  // int Ÿ���� �ܼ��� ���� �Ű������� ����
	int tmp = a;
	a = b;
	b = tmp;
	printf("swap1(): a=%d  b=%d\n\n", a, b);
}

void swap2(int* a, int* b) {  // int�� int*�� ������ �ڷ��� *(pointer) : ������ �ּҸ� ����
	int tmp = *a;
	*a = *b;
	*b = tmp;
	printf("swap2(): a=%d  b=%d\n\n", a, b);
}

void main() {

	int a = 10;
	int b = 20;
	swap1(a, b);  // call by value == "��"�� ���� ȣ��
	printf("a=%d  b=%d\n", a, b);

	swap2(&a, &b); // swap2()�� �Ű������� �ּҸ� �ޱ� ������ �ּҿ�����(&)�� �ٿ���� ��.

	printf("a=%d  b=%d", a, b);

}