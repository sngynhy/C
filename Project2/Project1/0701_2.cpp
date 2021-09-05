// 파일 입출력
// 운영체제와 소통 가능
// "현재 작업자의 위치"
// C:\SEONG_0622\workspace\Project2\Project1

#include<stdio.h>
void main() {

	// 파일 ------> 작업 공간에 데이터를 읽어오는 작업
	// 작업공간의 데이터 -------> 파일에 작성하는 작업
	// (데이터를 주고 받을 때 스트림 단위로 주고 받음)
	// 1) fopen()
	// 2) 작업
	// 3) fclose()

	// 파일을 주고 받을 때에는 파일의 주소를 통해 주고 받는다. (파일의 자료형)
	FILE* in; // 파일 읽어오기 - in 변수에 저장

	// fopen() 함수 수행 결과값이 파일의 메모리 주소이다.
	in = fopen("input.txt", "r"); // fopen("파일명.확장자", "모드") : 파일 열기 (r: 읽기 모드, w: 쓰기 모드)

	int i;
	double d;
	char c;
	char str[10];
	fscanf(in, "%d %lf %c %s", &i, &d, &c, str); // fscanf() : 파일로부터 값을 입력받는 함수
	printf("%d %lf %c %s\n", i, d, c, str);

	fclose(in);

}