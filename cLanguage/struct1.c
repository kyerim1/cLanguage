#include <stdio.h>

//struct1.c



typedef struct info {
	int age;
	float wg;
}info;

typedef struct User {
	char name[10];
	//info i; // ����
	info *data;   //�ܺ�����
	struct User *next; // ��������
}User;

void input(info * p) {
	for (int i = 0; i < 3; i++) {
		printf("���� : ");
		scanf_s("%d", &p[i].age);
		printf("������ : ");
		scanf_s("%f", &p[i].wg);
	}
}
void print(info* p) {
	for (int i = 0; i < 3; i++) {
		printf("%d. ���� : %d�� , ������ : %.1fKg \n", 
			i+1, p[i].age, p[i].wg);
	}
}

void main() {
	User u;
	info i;
	u.data = &i;
	u.data->age = 10;
	u.data->wg = 75.1;

	info i2;
	User daum = { "������", &i2 };
	daum.data->age = 24;
	daum.data->wg = 65.8;

	u.next = &daum;

	printf("%s %d \n",u.next->name , u.next->data->age ); //������, 24 ���



	info member[3];
	input(member);
	print(member);
}

// ����(����) �� ������(�Ǽ�) �� �����Ҽ� �ִ� ����ü
// 3���� ������ �Է� �ϰ� ��� �غ�����. ( ����ü �迭)
// input - �Է� �Լ� : Ű���� �Է�
// print - ��� �Լ�