#include <stdio.h>
#include <string.h>

#define size 3

void main() {

	//int[] arr = new int[5]; - 자바배열 
	// final int size = 10;

	int arr[5] = { 1, 2, 3, 4, 5 };

	/*int a[3];
	a = { 10,20,30 };*/

	int arr2[] = { 11, 22, 33, 44 };

	//const int size = 3;
	//constexpr int a = 10; c++ 버전11 이상

	//int arr[size]; // 배열의 크기는 상수로
	int arr3[size];

	//int number[10] = { 0 };

	int number[5];
	memset(number, 0, 5 * sizeof(int) );

	printf("%d", number[2]);
	number[0] = 10;
	number[1] = 20;
	number[2] = 30;
	number[3] = 40;
	number[4] = 50;

	printf("%d \n", number[4]);

	for (int i = 0; i < sizeof(number) / sizeof(int); i++) {
		printf("%d \n", number[i]);
	}

	int apple[10] = { 45, 34, 67, 23, 12, 69, 51, 89
	, 99, 28 };

	// 사과 상자가 10박스가 있다.
	// 각 박스안에 드렁있는 사과 갯수이다.
	// 이중 50개 이상 사과박스는 몇번째 몇번째 박스인지 출력

	for (int i = 0; i < 10; i++) {
		if (apple[i] >= 50) {
			printf("%d번째 박스 \n", i + 1);
		}
	}

	int grape[5];
	// 포도 5송이가 이다.
	// 한송이에 포도가 몇알 달려 있는지 입력 하여
	//  grape배열에 저장 하고 전체 출력하세요
	for (int i = 0; i < 5; i++) {
		printf("%d번째 포도의 갯수 : ", i + 1);
		//scanf_s("%d", &grape[i]);
		scanf_s("%d", grape + i);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d \n", grape[i]);
	}


}