#include<stdio.h>
#include<stdlib.h> // rand() �Լ��� ���ǵǾ� �ִ� ��ó����
#include<time.h>
void main() {

	// ���� ���� �Լ� rand()
	// rand() % N : N���� ������������ ������
	// �� 0, 1, 2, 3, ... , N-1 ������ ���� ��
	// ó�� ������ ������ �ٲ��� �ʴ´�.
	// ��ǻ���� �õ尪(������ȣ)�� ������
	
	srand(time(NULL)); // srand() �Լ��� ������ �������� ���� ���ڷ� �޴´�. - time(NULL) �ð��� ���� ���ڷ� ����
	// srand() �Լ��� rand() ���ʿ� �ۼ��Ǿ�� ��

	//int dice = rand() % 6 + 1; // 1, 2, ... 6
	//int num = rand() % 51 + 50; // 0~50 + 50 = 50~100

	int randNum = rand() % 10 + 1;  // rand() % 10 = 0, 1, 2, 3, ... 9
	printf("randNum: %d\n", randNum);

}