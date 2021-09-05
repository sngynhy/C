#include<stdio.h>
void swap1(int a, int b) {  // int 타입은 단순히 값을 매개변수로 받음
	int tmp = a;
	a = b;
	b = tmp;
	printf("swap1(): a=%d  b=%d\n\n", a, b);
}

void swap2(int* a, int* b) {  // int와 int*는 별개의 자료형 *(pointer) : 변수의 주소를 받음
	int tmp = *a;
	*a = *b;
	*b = tmp;
	printf("swap2(): a=%d  b=%d\n\n", a, b);
}

void main() {

	int a = 10;
	int b = 20;
	swap1(a, b);  // call by value == "값"에 의한 호출
	printf("a=%d  b=%d\n", a, b);

	swap2(&a, &b); // swap2()는 매개변수의 주소를 받기 때문에 주소연산자(&)를 붙여줘야 함.

	printf("a=%d  b=%d", a, b);

}