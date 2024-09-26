#include <stdio.h>
#include <string.h>

//struct.c
// class A{
//		int age=10;
//		String name;
//		float eyes;
// 
//  }
//	A[] 학생 = new A[5];
//  학생[0] = new A();
// 
// 
// 
//  A 이상민 = new A();
//	이상민.age=10;
//  이상민.eyes=1.1;
//  이상민.name = "이상민";

struct member {
	int age;
	float eyes;
	char name[10];
};

typedef struct grade {
	int kor;
	int mat;
	int eng;
	int total;
	float avg;
}grade;

void tot_avg(grade * p ) {
	for (int i = 0; i < 5; i++) {
		p[i].total = p[i].kor + p[i].mat + p[i].eng;
		p[i].avg = p[i].total / 3.0;
	}
}

void main() {
	grade std1 = {88,99,75};
	std1.kor = 88; std1.mat = 99; std1.eng = 75;
	std1.total = std1.kor + std1.mat + std1.eng;
	std1.avg = std1.total / 3.0;

	grade std[5] = { {88,90,34} , {66,45,61},
		{90,11,45},{87,34,91},{84,72,89} };
	// scanf_s("%d", &std[0].kor);
	tot_avg(std);

	for (int i = 0; i < 5; i++) {
		printf("%d %d %d %d %.2f \n", std[i].kor,
			std[i].mat, std[i].eng, std[i].total,
			std[i].avg);
	}


	struct member m;
	m.age = 24;
	m.eyes = 1.2;
	printf("%d   %f \n", m.age, m.eyes);
	//m.name = "홍길동";  // 10 = 110

	strcpy_s(m.name, 10, "홍길동");
	printf("%s \n", m.name);


}


//구조체 : c언어의 기본 데이터 타입으로 새롭게 정의하는 
//         사용자 정의 데이터 타입
//         각 부분과 요소들이 모여 이루어진 물체나 형태