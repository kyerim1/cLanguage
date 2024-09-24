#include <stdio.h>

// �Լ��� ���� - ���Ǳ����δ� main�ؿ�
void add(int*);
int* update();
void show(int*); 
int* make();


void main() {

	int num = 10;
	add(&num); // add�Լ��� 10�� �ְ�, 
	                // �����num������
	printf("%d \n", num);


	int* p;
	p = update();
	(*p)++; // up�������ּҸ� P�� �����߱⿡
	//    *p++ ��  up++ �� ����.
	update();
	(*p)++;
	update();
	(*p)++;
	update();

	// �迭 �� �Լ�
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

void add(int* temp) { // temp�� num �ּ� ����,

	*temp = *temp + 50;
	//return temp; // temp�� �� ���� -> num�� ����
}

int* update() {
	static int up = 1; // ���� ����
	printf("���� up  - > %d \n", up);
	return &up;
}

