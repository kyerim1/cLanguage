#include <stdio.h>

//pointer1.c

void main() {
	// 포인터 : 메모리의 주소를 저장하는 변수
	//     포인터 변수라고도 한다.

	int *p; // 포인터변수에는 메모리주소만 저장
	
	int num = 10; 
	p = &num;
	*p = 20;
	printf("%d \n", num);
	printf("p -> %p \n", p);
	printf("num의주소 -> %p \n", &num);


	char ch = 'g';
	char* pch = &ch;

	p = &ch;
	printf(" %c \n", *p);

	float f = 3.14;
	p = &f;
	printf("%f \n", *(float*)p);

	void* pp;

	




	// 포인터를 사용하는 이유
	// 메모리에 직접 접근 이 가능하다. - 효율적 관리
	// 빅데이터에대해  복사없이  전달이 가능
	// 배열 또는 구조체에 복사없이 접근가능
	// 동적 메모리 할당 - 메모리 접근하여 필요한 만큼 할당
	// 복잡한 데이터 구조 표현 - 링크드리스트, 그래프, 트리
	// 함수포인터 - 함수 호출 유연하게 구현


}