#include<stdio.h>
void main() {
	// 배열
	// 배열명 == &배열[0]
	
	// 문자열
	// 문자 배열을 이용하여 문자열을 표현!
	char str[6] = "apple";  // 문자열은 끝을 알리는 '\0'(null문자, 1byte)이 문자열 끝에 추가됨
	char str2[4] = "abc";
	char str3[] = "efgh";  // 문자열의 길이는 일반적으로 생략함 -> 자동적으로 메모리가 생성되어 저장됨
	char arr[3] = { 'a','b','c' };  // 문자 배열

	printf("%s\n", str);
	printf("%s\n", str2);

	printf("문자열 입력: ");
	scanf("%s", str);  // 주소 연산자(&) 쓰지 않음 why? 배열명 == &배열[0] 이기 때문!
	printf("%s\n", str);

	// 문자열 에러! StackOverflow - 저장 공간 부족 오류! 문자열의 길이는 크게 만들 것!
}