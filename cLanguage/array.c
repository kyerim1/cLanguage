#include <stdio.h>
#include <string.h>

#define size 3

void main() {

	//int[] arr = new int[5]; - �ڹٹ迭 
	// final int size = 10;

	int arr[5] = { 1, 2, 3, 4, 5 };

	/*int a[3];
	a = { 10,20,30 };*/

	int arr2[] = { 11, 22, 33, 44 };

	//const int size = 3;
	//constexpr int a = 10; c++ ����11 �̻�

	//int arr[size]; // �迭�� ũ��� �����
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

	// ��� ���ڰ� 10�ڽ��� �ִ�.
	// �� �ڽ��ȿ� �巷�ִ� ��� �����̴�.
	// ���� 50�� �̻� ����ڽ��� ���° ���° �ڽ����� ���

	for (int i = 0; i < 10; i++) {
		if (apple[i] >= 50) {
			printf("%d��° �ڽ� \n", i + 1);
		}
	}

	int grape[5];
	// ���� 5���̰� �̴�.
	// �Ѽ��̿� ������ ��� �޷� �ִ��� �Է� �Ͽ�
	//  grape�迭�� ���� �ϰ� ��ü ����ϼ���
	for (int i = 0; i < 5; i++) {
		printf("%d��° ������ ���� : ", i + 1);
		//scanf_s("%d", &grape[i]);
		scanf_s("%d", grape + i);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d \n", grape[i]);
	}


}