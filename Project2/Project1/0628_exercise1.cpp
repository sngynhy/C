// �� cmdâ�� ���� ���� ��!
//	������Ʈ->�Ӽ�->��Ŀ->�ý���->�����ý���:�ܼ�

// �� scanf ����!
//	������Ʈ->�Ӽ�->C/C++->��ó����->��ó���� ����: _CRT_SECURE_NO_WARNINGS �Է�
#include<stdio.h>
void main() {

	// 1)
	int i;
	double sum = 0.0;
	
	printf("���� �Է�: ");
	scanf("%d", &i);

	for (int j = 0; j < i; j++) {
		double d;
		printf("�Ǽ� �Է�%d: ", j + 1);
		scanf("%lf", &d);
		sum += d;
	}
	double avg = sum / i;
	printf("������ %lf�̰�, ����� %lf�Դϴ�.\n\n", sum, avg);

}