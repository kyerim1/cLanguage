#include <stdio.h>
#include <time.h>

// variable.c 

extern int result; // �ٸ� �����ִ� �������� �Ȱ��� ����
extern void sum(int, int);

int size = 100; // ��������

void test();

int len = 50; // ��������

void main() {
	//sum(30, 40);
	//printf("�ܺ� ����  %d \n", result);


	//// ���� , �迭 ������ ������
	//int num = 10; //  ��������
	//printf("%d \n", size);
	//test();
	//size = 1500;
	//test();

	int num = 0 , i=0, k=0; //��������
	register int reg = 0, reg_i = 0, reg_k = 0; // �������ͺ���

	clock_t time1 = clock(), time2;
	for (i = 0; i < 10000; i++) {
		for (k = 0; k < 10000; k++) {
			num += i;
		}
	}
	printf("�������� : %d \n", clock() - time1);
	time2 = clock();
	for (reg_i = 0; reg_i < 1000; reg_i++) {
		for (reg_k = 0; reg_k < 1000; reg_k++) {
			reg += reg_i;
		}
	}
	printf("�������ͺ��� : %d \n", clock() - time2);

}
void test() {
	int a = 10; // ��������
	static int b = 10; // �������� - �����ѹ� �Ҵ� ,�ʱ�ȭ
	printf("%d  %d  %d %d\n", a, b, size, len);
	a++;
	b++;
}
//�������� : �Լ� ȣ�� ��  �Ҵ�,  �Լ� ����� ����
// ���� ���� : �Լ�ȣ�� �� �Ҵ�, ���α׷� ����� ����
// ���� ���� : ���α׷� ���� �Ҵ� ���α׷� ����� ����
//�ܺ� ���� :  �ٸ� ���� �ִ� ���������� ����Ҽ� �ִ� ����
// �������� ���� :  cpu�� ���� �Ҵ� 