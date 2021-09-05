#include<stdio.h>
#include<stdlib.h>
void main() {
	
	// ★☆정렬☆★
	//	필요한 데이터를 탐색(검색) 시 용이하게(빠르게) 찾기 위해서!

	// 버블 정렬
	// 맨 앞에서부터 오른쪽에 있는 값과 대소를 비교하여 자리를 교환해주는 방식

	int arr[] = { 3, 4, 1, 5, 2 };

	// 오름차순 버블 정렬
	for (int a=0; a<4; a++) {
		for (int i = 0; i < 4; i++) {  // 앞에서부터 두 값을 비교하는 행위가 4번 시행됨 == (데이터 갯수 - 1)
			if (arr[i] > arr[i + 1]) {
				// 앞 뒤 데이터 교환
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
		for (int i = 0; i < 5; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	printf("\n\n");


	// 내림차순 버블 정렬
	int arr2[10];
	for (int i = 0; i < 10; i++) {
		arr2[i] = rand() % 100 + 1;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n\n");

	for (int a = 0; a < 9; a++) {
		for (int i = 0; i < 9; i++) {
			if (arr2[i] < arr2[i + 1]) {
				int tmp = arr2[i];
				arr2[i] = arr2[i + 1];
				arr2[i + 1] = tmp;
			}
		}
		for (int i = 0; i < 10; i++) {
			printf("%d ", arr2[i]);
		}
		printf("\n");
	}
}