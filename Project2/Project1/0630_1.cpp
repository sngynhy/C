// 함수 3요소 - input, output, 기능
// 사용자 정의 함수 - #include<>와 main() 사이에 정의 (∵ main()함수에서 호출되기 전에 빌드가 되어있어야하기 때문!)
/*
화면에 "안녕하세요!"를 출력하는 함수 정의
 - input(x), output(x)
*/
#include<stdio.h>
void hello(void) { // 파라미터 (void) <- void 생략 가능
	printf("안녕하세요!\n");
}

// 빌드(번역) 순서 -> 1번라인 부터 진행
// 실행 순서 -> main() 함수부터 찾아 실행

void main() {
	
	hello(); // 함수는 main() 함수에서 호출이 되어야 사용됨! 8번라인으로 가서 10번라인까지 수행 후 아래 코드 실행

}

// 함수의 필요성!
// "코드의 재사용성 증가"
// - 유지 보수 효율성 증가
// - 개발 시간 단축 => 비용 절감
// - 검사 시간 => 비용 절감
// => 결국 기업에서 가장 원하는 가치!