#include<stdio.h>
// ��� �Լ� == ��ȯ ȣ�� -> "���� ����"�� �����ϹǷ� "���� ����" �ʼ�!
// : � �Լ��� ����� �����ϴ� �߿� �ڱ� �ڽ��� �� ȣ���ϴ� �Լ�, ����
/* ��)
 n! = n * (n-1)!
 f(n) = n * f(n-1)
*/
int fac(int N) {
	if (N == 1) { // ���� ����!
		return 1;
	}
	return N * fac(N - 1);
}
void main() {
	
	int res = fac(5);
	printf("5!�� %d�Դϴ�.\n", res);

	int i;
	printf("���� 1�� �Է�: ");
	scanf("%d", &i);
	printf("%d!�� %d�Դϴ�.\n", i, fac(i));

}