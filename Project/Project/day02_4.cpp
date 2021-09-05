#include<stdio.h>
void main() {
	
	// 비트 연산자
	// 8bit = 1byte
	// int 4byte 00000000 00000000 00000000 00000001
	int a = 10;  // 00001010
	int b = 11;  // 00001011
	printf("a & b = %d\n", a & b); // & : 비트 연산자 AND. 둘 다 1(T) -> 1(T)
	// 00001010 => 10
	printf("a | b = %d\n", a | b); // | : 비트 연산자 OR. 둘 중 하나라도 1(T) -> 1(T)
	// 00001011 => 11
	printf("a ^ b = %d\n", a ^ b); // ^ : 비트 연산자 XOR. 비교 하는 두 값이 동일하면 0(F), 다르면 1(T)
	// 00000001=> 1

	// 비트 이동 연산자 == 쉬프트 연산자
	// <<, >>
	b = a >> 2; // 각 비트를 오른쪽으로 2칸씩 이동
	printf("%d\n", b);
}