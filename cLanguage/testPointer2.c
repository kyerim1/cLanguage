#include <stdio.h>

// testPointer2.c

void input( int (*p)[5] );

void main() {
	int std[5][5] = { 0 };
	input(std);
}

void input(int(*p)[5]) {
	for (int i = 0; i < 5; i++) {
		printf("���� : ");
		scanf_s("%d", &p[i][0]); // p[0] + 0
		printf("���� : ");
		scanf_s("%d", p[i] + 1);
		printf("���� : ");
		scanf_s("%d", &p[i][2]);
		p[i][3] = p[i][0] + p[i][1] + p[i][2];//����
		p[i][4] = p[i][3] / 3; //���

	}

}

/*
5���� �л��� �ִ�.
���� ���� ���� 3������ ������ �Է��ϰ� 
������ ����� �����ϼ���.
 ���� �Է� �Լ� - input 
(5�� �л��� ���������� ����,����� 
�����Ҽ� �ִ� �迭 ����)

*/