#include<stdio.h>
void main() {


	FILE* in = fopen("input.txt", "r");
	// 읽기 모드는 해당 파일이 없으면 새로 생성하고, 있으면 덮어쓰기 된다.
	FILE* out = fopen("output.txt", "w");
	
	// 파일에 데이터 전달
	//fprintf(out, "안녕하세요!\n");
	//int num = 100;
	//fprintf(out, "num= %d\n", num);

	int n;
	while (!feof(in)) {  // 파일의 끝을 찾았나? file end of (파일명)
		// 파일 복사
		printf("확인\n");
		fscanf(in, "%d", &n);
		fprintf(out, "%d", n);

	}


	fclose(in);
	fclose(out);
	printf("수행종료\n");
}