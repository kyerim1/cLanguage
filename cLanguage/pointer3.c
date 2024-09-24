#include <stdio.h>

//pointer3.c
typedef double d;
typedef int(*pb)[2]; // 배열포인터를 타입으로정의

pb make() {
	static int b[2][2] = { {1,2}, {10,20} };
	return b;
}

void main() {

	pb pa = make();
	printf("%d %d \n", pa[0][0], pa[1][1]);

	// 1차원 포인터변수 저장가능 주소
	// : 변수의주소 또는 동급(1차원배열)
	// 2차원 포인터변수 저장가능 주소
	// : 1차원포인터변수의 주소 또는
	//   동급(1차원 포인터배열)
	
	// 배열 포인터 : 다차원 배열의 주소에 접근하기 위한
	//             포인터이다.

	int arr[3] = { 10,20,30 };
	int* p = arr;
	printf("%d %d \n", p[0], p[1]);

	int a[2][3] = { {1,2,3},{4,5,6} };

	int (* p2)[3] = a; // 배열포인터
	printf("%d \n", p2[0][0]);

}