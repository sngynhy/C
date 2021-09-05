#include<stdio.h>
void main() {

	// 파일 입출력
	FILE* in;  // 파일의 주소를 받는 변수
	in = fopen("input.txt", "r");  // 파일의 메모리 위치(주소)를 반환, 열 파일이 존재하지 않으면 에러
	
	FILE* out;
	out = fopen("output.txt", "w"); // 파일 있으면 덮어쓰기, 없으면 새로 생성

	// input 파일의 내용 받아오기
	// 파일의 값이 몇 개 존재하는지 모를 때
	int sum = 0;
	while (!feof(in)) {  // 파일의 끝이 아니라면 계속 수행 (즉, 파일의 마지막 값을 찾을때까지)
		// feof == file end of (파일) : 파일의 끝 값이니?
		// 현재 상황에서는 파일의 마지막 int형의 값을 찾을때까지 수행(아래 코드때문)
		int num;
		scanf("%d", num);
		sum += num;
	}
	printf("총합은 %d입니다.\n", sum);


	fclose(in);
	fclose(out);
}