#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//testPointer.c

//함수의 원형
void input(int* , int); // 데이터 입력 함수 선언
void print(int* n); // 데이터 출력 함수 선언

void main() {
	int numbers[15];
	input(numbers, sizeof(numbers)/sizeof(int));
	print(numbers);
}

void input(int* n, int size) { //함수 정의
	srand(time(NULL));
	for (int i = 0; i < size; i++ ) {
		n[i] = rand() % 50+1;
	}
}
void print(int* n) {
	for (int i = 0; i < 15; i++) {
		printf("%d \n", n[i]);
	}
}

// main 함수에서  1차월 배열 numbers 를 생성
// numbers 크기는 15
// input 이라는 함수를 통해 numbers 배열에 
// 랜덤값 저장 하기  랜덤범위(1~50)
// print 함수를 통해 numbers 값 출력하기 