#include<stdio.h>
void main() {


	FILE* in = fopen("input.txt", "r");
	// �б� ���� �ش� ������ ������ ���� �����ϰ�, ������ ����� �ȴ�.
	FILE* out = fopen("output.txt", "w");
	
	// ���Ͽ� ������ ����
	//fprintf(out, "�ȳ��ϼ���!\n");
	//int num = 100;
	//fprintf(out, "num= %d\n", num);

	int n;
	while (!feof(in)) {  // ������ ���� ã�ҳ�? file end of (���ϸ�)
		// ���� ����
		printf("Ȯ��\n");
		fscanf(in, "%d", &n);
		fprintf(out, "%d", n);

	}


	fclose(in);
	fclose(out);
	printf("��������\n");
}