#include<stdio.h>
void main() {
	
	/*
	���
	 - �ݺ���
		for�� - ���� Ƚ��(�Ǵ� ����)�� �и��� �� ����
		while�� - ���� Ƚ���� �Һи� �� �� ���� (������ ������ ������ ���ѷ���)
	*/

	/*
	�ݺ����� �߿伺
	 1. ó�� �ӵ�
	 2. �ѹ��� ȣ��(�ڵ��ۼ�)�� ���� ���� ���� ����
	 3. �ڵ� ������ ����
	 4. ��� ����
	*/

	int i = 1;
	while (i <= 3) {
		printf("�ȳ�!\n");
		i++;
	}
	printf("i=%d\n\n", i);


	int num = 1;
	int sum = 0;
	while (num <= 10) {
		sum += num;
		num++;
	}
	printf("sum=%d\n\n", sum);


	char c = 'a';
	while (c <= 'z') {
		printf("%c ", c);
		c++;
	}
	printf("\n\n");

	int j = 1;
	while (j < 11) {
		if (j % 2 == 1) {
			printf("%d ", j);
			//j++;  // ���ѷ���
		}
		j++;
	}
	printf("\n\n");
	

	int cnt, num2;
	printf("1�� �Է�: ");
	scanf("%d", &cnt);

	int a = 1; // �ݺ����� ���� Ƚ���� ��Ʈ���ϴ� ����
	while (a <= cnt) {
		printf("���� �Է�: ");
		scanf("%d", &num2);
		a++;
	}

}