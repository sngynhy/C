#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {
	
	/* �迭 ���� �� Ȯ���ؾ� �� 3���
		1. ���ü�
		2. ���� �ڷ���
		3. ũ�⸦ ��Ȯ�� �ľ� */

	// �ߺ��� ���� ����, �����ġ�, Ž��(or �˻�) �˰���

	srand(time(NULL));

	// �ζ� ����
	int arr[5];
	for (int i = 0; i < 5; i++) { // �迭�� index number ����!
		arr[i] = rand() % 45 + 1; // 1 ~ 45�� ����
	}

	printf("["); 
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");


	// Ž��, �˻� �˰���
	int v;
	printf("ã����� ���� �Է�: ");
	scanf("%d", &v);

	// ù��° ����
	// �� ã���� 0ȸ ���(�ִ� 5�� ��� ����)
	for (int i = 0; i < 5; i++) {
		if (v == arr[i]) {
			printf("ã�Ҵ�!\n");
		}
	}
	
	// �ι�° ����
	// �� ã���� "����", ã���� "ã��" + "����" ���
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		if (v == arr[i]) {
			cnt++;
		}
	}
	if (cnt == 0) {
		printf("����\n");
	}
	else {
		printf("%d�� ã��\n", cnt);
	}

}