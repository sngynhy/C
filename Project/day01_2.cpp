#include<stdio.h>
void main() {
	int a = 10;
	int b = 20;
	printf("a�� %d�� �ִ�.\n", a); // ���� ������ ���� ����
	printf("b�� %d�� �ִ�.\n\n", b);
	printf("a�� %d�� �ִ�.\nb�� %d�� �ִ�.\n\n", a, b); // a, b ������ ���缭 �ۼ�

	double d = 3.14;
	char c = 'A';
	printf("d=%lf   c=%c\n\n", d, c);

	int num = a + b;
	printf("%d + %d = %d\n\n", a, b, num);

}
/*
���� ������ ���� ����
 %d : int ����
 %lf : double �Ǽ�
 %c : char (����)����
 %s : string ���ڿ�
*/

/*
������ �켱 ����
���� �����ڴ� ��ü������ �켱 ������ ����.
*/