#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//testPointer.c

//�Լ��� ����
void input(int* , int); // ������ �Է� �Լ� ����
void print(int* n); // ������ ��� �Լ� ����

void main() {
	int numbers[15];
	input(numbers, sizeof(numbers)/sizeof(int));
	print(numbers);
}

void input(int* n, int size) { //�Լ� ����
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

// main �Լ�����  1���� �迭 numbers �� ����
// numbers ũ��� 15
// input �̶�� �Լ��� ���� numbers �迭�� 
// ������ ���� �ϱ�  ��������(1~50)
// print �Լ��� ���� numbers �� ����ϱ� 