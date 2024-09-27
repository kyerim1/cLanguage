
#include "autoDriving.h"

void main() {
	carStatus car; // 차 상태 저장할 구조체변수
	//차 상태 초기화
	init( &car );

	print_status(&car); //현재 차 상태 출력
}


//carMain.c