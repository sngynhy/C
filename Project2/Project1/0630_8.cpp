/* 스토리지 클래스(Storage Class)
	기억 영역, 저장 공간
	=> 변수의 종류: 저장되는 영역의 위치, 생명주기
		[변수의 유효 범위 scope(스코프)]
		
1-1) 지역(local) 변수
	  - 함수 내부에 선언되고 사용
	  - 블록 { } 밖에서는 사용 불가
	  - 변수의 생명 주기가 선언된 함수와 동일

1-2) 전역(global) 변수
	  - 함수 "외부"에 선언되고 모든 함수 내부에서 사용 가능
	  - 생명 주기가 프로그램 수준과 동일

함수 내부의 값은 누적되지 못함 -> 만약 누적시키고 싶은 값이 생겼다면?

1-3) 정적(static) 변수
	  - 생명 주기를 변경 : 함수 수준 -> 프로그램 수준으로 변경

*/
#include<stdio.h>
//int i = 0;  // 전역(global) 변수 선언
void f() {
	static int i = 0;  // 정적(static) 변수 선언
	i++;
	if (i == 4) {
		printf("쾅!!! ");
		i = 0;
	}
	printf("공격! i= %d\n", i);
	
}

void main() {
	f();
	f();
	f();
	f();
	printf("전역변수 i= %d\n", i);
}