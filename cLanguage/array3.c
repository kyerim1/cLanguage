#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define arr_size 10

void main() {

	// 10크기 배열 arr에  랜덤값 저장
	srand(time(NULL));
	int arr[arr_size];
	for (int i = 0; i < arr_size; i++) {
		arr[i] = rand() % 10 + 1;
	}

	for (int i = 0; i < arr_size; i++) {
		printf("%d \n", arr[i]);
	}

	// 랜덤값(5 ~ 17)
	// 7,8,9 값이 나오면 plus 이다. 출력
	// 10, 11 은 minus 이다. 출력
	// 100번을 반복하여  plus이다. 출력할때
	// 마다  배열에 숫자 저장 하기
	// 100번 반복이 끝나면 값저장된 위치까지
	// 배열 출력
	// * 배열의 크기는 100으로 하고 
	//   0으로 초기화 하기 

	int num[100] = { 0 };
	// #include <string.h>
	// memset(num, 0, sizeof(int) * 100);

	int k = 0; //num배열에 인덱스로 활용
	for (int i = 1; i <= 100; i++) {
		int temp = rand() % 13 + 5;
		if (temp >= 7 && temp <= 9) {
			printf("plus이다.\n");
			num[k++] = temp;
		}
		else if (temp == 10 || temp == 11) {
			printf("minus이다. \n");
		}
	}

	// num 배열 값 출력
	for (int i = 0; i < k; i++) {
		printf("%d\n", num[i]);
	}


	// 자바스크립트 다차원 배열
	// var arr = new Array();
	// arr.push( new Array());
	// var arr2 = [ [1,2,3] , [ 4,5,6] ];

	// 자바 다차원 배열
	// int[][] arr = new int[3][4];

	// c언어 다차원배열
	int arr2[3][4];
	arr2[0][0] = 10;
	arr2[0][1] = 20;
	arr2[0][2] = 30;
	arr2[0][3] = 40;
	arr2[1][0] = 50;
	arr2[1][1] = 60;
	arr2[1][2] = 70;


	printf("arr2 주소 -> %p \n", arr2);
	printf("arr2+1주소 - > %p \n", arr2 + 1);
	printf("arr2[0] 주소 -> %p \n", arr2[0]);
	printf("arr2[0]+1 주소 -> %p \n", arr2[0] + 1);

	printf("arr2[1] , arr2+1 주소 -> %p , %p\n",
		arr2[1], arr2 + 1);
	printf("arr2[1]+1 , (arr2+1)+1 주소 -> %p , %p\n",
		arr2[1]+1, (arr2 + 1)+1);

	printf("arr2[1] 주소 -> %p \n", arr2[1]);
	printf("&arr2[1][0] 주소 -> %p \n", &arr2[1][0]);

	printf("arr2[1][0]  -> %d \n", arr2[1][0]);
	printf("*arr2[1] -> %d \n", *arr2[1]);

	printf("*&arr2[1][0] -> %d \n", *&arr2[1][0]);

}