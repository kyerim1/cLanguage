#include <stdio.h>

//pointer5.c

int** init() {
	static int a[3] = { 11,22,33 };
	static int b[5] = { 50,40,88, 99,81 };
	static int* p[2] = { a ,b };
	printf("a �ּ� -> %p \n", a);
	printf("b �ּ� -> %p \n", b);
	printf("a�迭 33 �ּ� -> %p \n", a + 2);
	return p;
}

void main() {
	int ** p2  = init();
	printf("%p \n", p2);
	printf("*p2 -> %p \n", *p2);
	printf("%d \n", (*p2)[1]);
	printf(" *p2+1 ->  %p \n",  *(p2+1) );
	printf("%p \n", *(p2)+2);

	printf("99 �ּ� -> %p \n", *(p2+1)+3  );


	printf(" %d  %d  \n", p2[0][1] , p2[1][3]); //  22 �� 99 ���

	printf("%d \n", p2[1][1]);

	




	int *pa[5];
	int num = 10;
	pa[0] = &num;
	int arr[3] = { 10,20,30 };
	pa[1] = arr;

	printf("%d  \n", *pa[0] );
	printf("%d \n", pa[1][2]); // *(pa[1]+2)

	int arr2[10] = { 100,500,431,5489 };
	pa[2] = arr2;

	printf("%d  \n", pa[2][2]);
}

// ������ �迭 : �����ͺ����� ���������� �Ǿ��ִ� �޸𸮰���