#include<stdio.h>
#include<stdlib.h>
// pointer(포인터) : 메모리에 직접 접근할 때, 해당 변수 공간을 바라볼 수 있게 해주는 type! (특히 함수에서)
void f(int* stu) {
	for (int i = 0; i < 5; i++) {
		stu[i] = rand() % 101;
	}
}
void main() {

	int stu[5];
	f(stu); // 배열명 == &배열[0] : 배열의 0번째 인덱스 주소
	// 함수의 리턴이 없는 이유는?
	// 실제 stu 배열의 공간이 이동해서 값을 받아왔기 때문!
	// 즉, "주소"를 파라미터로 함수에 전달하여 직접 가서 값을 받아왔다!

	for (int i = 0; i < 5; i++) {
		printf("%d ", stu[i]);
	}
}