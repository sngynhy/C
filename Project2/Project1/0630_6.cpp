#include<stdio.h>
// pointer(포인터) : 메모리에 직접 접근할 때, 해당 변수 공간을 바라볼 수 있게 해주는 type! (특히 함수에서)
// call by value : 값에 의한 호출
void swap(int* a, int* b) {  // type* 변수 : pointer 주소를 저장 == 하나의 자료형(type)이다!
	int tmp = *a;  // *a : a가 가리키는 주소의 "값"을 tmp 변수에 저장 / a : a의 주소
	*a = *b;  // *b가 가리키는 주소의 "값"을 *a가 가리키는 주소의 공간에 저장
	*b = tmp;  // tmp의 값을 *b가 가리키는 주소의 공간에 저장
}

void main() {
	int a = 10, b = 20;
	printf("a=%d  b=%d", a, b);

	//swap(a, b); // swap() 함수 공간에서만 두 값이 바뀌고 main() 함수 공간에는 반영되지 않음
	
	swap(&a, &b);  // 매개변수로 주소를 전달!
	// 주소 연산자를 붙여야 함수 실행 후 바뀐 값이 주소에 전달되어 저장됨
	// call by pointer 또는 call by reference : 참조에 의한 호출
	
	printf("a=%d  b=%d", a, b);
}