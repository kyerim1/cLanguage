#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define arr_size 10

void main() {

	// 10ũ�� �迭 arr��  ������ ����
	srand(time(NULL));
	int arr[arr_size];
	for (int i = 0; i < arr_size; i++) {
		arr[i] = rand() % 10 + 1;
	}

	for (int i = 0; i < arr_size; i++) {
		printf("%d \n", arr[i]);
	}

	// ������(5 ~ 17)
	// 7,8,9 ���� ������ plus �̴�. ���
	// 10, 11 �� minus �̴�. ���
	// 100���� �ݺ��Ͽ�  plus�̴�. ����Ҷ�
	// ����  �迭�� ���� ���� �ϱ�
	// 100�� �ݺ��� ������ ������� ��ġ����
	// �迭 ���
	// * �迭�� ũ��� 100���� �ϰ� 
	//   0���� �ʱ�ȭ �ϱ� 

	int num[100] = { 0 };
	// #include <string.h>
	// memset(num, 0, sizeof(int) * 100);

	int k = 0; //num�迭�� �ε����� Ȱ��
	for (int i = 1; i <= 100; i++) {
		int temp = rand() % 13 + 5;
		if (temp >= 7 && temp <= 9) {
			printf("plus�̴�.\n");
			num[k++] = temp;
		}
		else if (temp == 10 || temp == 11) {
			printf("minus�̴�. \n");
		}
	}

	// num �迭 �� ���
	for (int i = 0; i < k; i++) {
		printf("%d\n", num[i]);
	}


	// �ڹٽ�ũ��Ʈ ������ �迭
	// var arr = new Array();
	// arr.push( new Array());
	// var arr2 = [ [1,2,3] , [ 4,5,6] ];

	// �ڹ� ������ �迭
	// int[][] arr = new int[3][4];

	// c��� �������迭
	int arr2[3][4];
	arr2[0][0] = 10;
	arr2[0][1] = 20;
	arr2[0][2] = 30;
	arr2[0][3] = 40;
	arr2[1][0] = 50;
	arr2[1][1] = 60;
	arr2[1][2] = 70;


	printf("arr2 �ּ� -> %p \n", arr2);
	printf("arr2+1�ּ� - > %p \n", arr2 + 1);
	printf("arr2[0] �ּ� -> %p \n", arr2[0]);
	printf("arr2[0]+1 �ּ� -> %p \n", arr2[0] + 1);

	printf("arr2[1] , arr2+1 �ּ� -> %p , %p\n",
		arr2[1], arr2 + 1);
	printf("arr2[1]+1 , (arr2+1)+1 �ּ� -> %p , %p\n",
		arr2[1]+1, (arr2 + 1)+1);

	printf("arr2[1] �ּ� -> %p \n", arr2[1]);
	printf("&arr2[1][0] �ּ� -> %p \n", &arr2[1][0]);

	printf("arr2[1][0]  -> %d \n", arr2[1][0]);
	printf("*arr2[1] -> %d \n", *arr2[1]);

	printf("*&arr2[1][0] -> %d \n", *&arr2[1][0]);

}