#include<stdio.h>
void main() {

	// 1)
	int num;
	printf("���� 1�� �Է�: ");
	scanf("%d", &num);

	int i = 1;
	int sum = 0;

	if (num < 0) {
		num *= (-1);  // �Է� ���� ������ ��쿡 ����� ����
	}
	while (i <= num) {
		sum += i;
		i++;
	}
	printf("���� %d\n\n", sum);


	// 2)
	int a, b;
	printf("���� 2�� �Է�: ");
	scanf("%d%d", &a, &b);
	
	if (a > b) {
		// a�� b�� ���� "��ȯ"
		// [��ȯ �˰���]
		//  -> �ӽ� ���� ���� : tmp, temp
		int tmp = a;
		a = b; // a���� b�� ������ ����
		b = tmp; // b���� a���� ����Ǿ� �ִ� tmp������ ��, a������ ����
	}
	int j = a;
	int sum2 = 0;
	while (j <= b) {
		printf("%d ", j);
		sum2 += j;
		j++;
	}
	printf("����: %d\n", sum2);
	double avg = (double) sum2 / (b - a + 1);
	printf("���: %fl\n\n", avg);

	//int min = a < b ? a : b;
	//int max = a > b ? a : b;
	//int j = min;
	//while (j <= max) {
	//	printf("%d ", j);
	//	j++;
	//}


	// 3)
	char al = 'a'; // a == 97, A == 65
	while (al <= 'z') {
		switch (al % 2) {
		case 0:
			// �빮�ڷ� �����Ͽ� ���
			printf("%c", al - 32);
			break;
		case 1:
			printf("%c", al);
		}
		al++;
	}


	// 4, 5)
	int n = 0;
	int cnt2 = 0, sum3 = 0;
	while (n < 5) {
		int k;
		printf("�����Է�: ");
		scanf("%d", &n);
		if (n % 2 == 1) {
			// Ȧ���� ��� ��
			sum3 += n;
		}
		else {
			// ¦���� ��� ī��Ʈ
			cnt2++;
		}
		k++;
	}
	printf("¦��: %d�� Ȧ����: %d\n", cnt2, sum3);
}