#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
void main() {

	char ch = 'b'; //아스키코드표
	short  s = 10;// 10진수정수
	int i = 100; // 10진수 정수
	long l = 2323; // 10진수 정수

	float f = 2.34;// 10진수 실수
	double d = 3142.23; // 10진수 실수

	bool b = true;
	// 서식 문자  
	// %d - 10진수 정수
	//  %c - 문자
	// %f - 10진수 실수 , %lf 
	// %s - 문자열
	// %p - 포인터값


	// 출력 -  printf, 입력 - scanf
	// 입력 하는 방법
	//int num1, num2;

	//printf("두정수를 입력하세요");
	////scanf_s("%d", &num1);
	////scanf_s("%d", &num2);

	//scanf_s("%d %d", &num1, &num2);
	//printf("%d  %d \n", num1, num2);


	//printf("%d %c", 10, 'a');


	//printf("잘 되고 있나?");


	//국어 , 수학, 영어 점수 입력 하고
	//  총점과 평균 을 구하여 출력

	int kor, mat, eng;
	int total, avg;

	printf("국어 점수 : ");
	scanf_s("%d", &kor);
	printf("수학 점수 : ");
	scanf_s("%d", &mat);
	printf("영어 점수 : ");
	scanf_s("%d", &eng);

	total = kor + mat + eng;
	avg = total / 3;
	printf("총점 : %d , 평균 : %d \n", total, avg);
}