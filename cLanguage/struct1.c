#include <stdio.h>

//struct1.c



typedef struct info {
	int age;
	float wg;
}info;

typedef struct User {
	char name[10];
	//info i; // 포함
	info *data;   //외부참조
	struct User *next; // 내부참조
}User;

void input(info * p) {
	for (int i = 0; i < 3; i++) {
		printf("나이 : ");
		scanf_s("%d", &p[i].age);
		printf("몸무게 : ");
		scanf_s("%f", &p[i].wg);
	}
}
void print(info* p) {
	for (int i = 0; i < 3; i++) {
		printf("%d. 나이 : %d세 , 몸무게 : %.1fKg \n", 
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
	User daum = { "김유신", &i2 };
	daum.data->age = 24;
	daum.data->wg = 65.8;

	u.next = &daum;

	printf("%s %d \n",u.next->name , u.next->data->age ); //김유신, 24 출력



	info member[3];
	input(member);
	print(member);
}

// 나이(정수) 와 몸무게(실수) 를 저장할수 있는 구조체
// 3명의 정보를 입력 하고 출력 해보세요. ( 구조체 배열)
// input - 입력 함수 : 키보드 입력
// print - 출력 함수