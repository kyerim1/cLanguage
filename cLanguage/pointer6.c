#include <stdio.h>

typedef (*func)(int, int);

void sum(int a, int b) {
	printf("�� ���� �� : %d \n", a + b);
}

int plus(int a, int b) {
	return a + b;
}
int minus(int a, int b) {
	return a - b;
}
int times(int a, int b) {
	return a * b;
}

void caculation( func fc, int num1, int num2) {
	int result = fc(num1, num2);
	printf(" ��� �� : %d \n", result);
}

void main() {
	caculation(plus, 10, 20);
	caculation(minus, 50, 30);
	caculation(times, 6, 7);


	//sum(10, 20);

	//printf("%p \n", sum);

	//// �Լ�������
	//void (* psum)(int,int);
	//psum = sum;

	//psum(40, 50);



}
// �Լ� ������ : �Լ��� �̸� �ּҴ�.