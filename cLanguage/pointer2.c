#include <stdio.h>

// 함수의 원형 - 정의구현부는 main밑에
void add(int*);
int* update();
void show(int*); 
int* make();


void main() {

	int num = 10;
	add(&num); // add함수에 10을 주고, 
	                // 결과를num에저장
	printf("%d \n", num);


	int* p;
	p = update();
	(*p)++; // up변수의주소를 P에 저장했기에
	//    *p++ 은  up++ 과 같다.
	update();
	(*p)++;
	update();
	(*p)++;
	update();

	// 배열 과 함수
	int arr[5] = { 10,20,30,40,50 };
	show(arr);

	int* p2 = make();
	for (int i = 0; i < 5; i++) {
		printf("%d \n", p2[i]);
	}
}

int* make() {
	static int arr2[5] = { 100,200,250,350,110 };
	return arr2;
}

void show(int* parr) {
	for (int i = 0; i < 5; i++) {
		printf("%d \n", parr[i]);
	}

}

void add(int* temp) { // temp에 num 주소 저장,

	*temp = *temp + 50;
	//return temp; // temp의 값 리턴 -> num에 저장
}

int* update() {
	static int up = 1; // 정적 변수
	printf("변수 up  - > %d \n", up);
	return &up;
}

