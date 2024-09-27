
#include "autoDriving.h"

void gotoxy(int x, int y) {
	COORD cd;
	cd.X = x;
	cd.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cd);
}
int px = 7, py = 7;
void draw(carStatus* car) {
	
	px = px+car->x_pos;
	py = py-car->y_pos;
	gotoxy(px, py);
	printf("@");

	
}


void main() {
	srand(time(NULL));
	carStatus car; // �� ���� ������ ����ü����
	//�� ���� �ʱ�ȭ
	init( &car );

	print_status(&car); //���� �� ���� ���

	while (1) {
		gotoxy(10, 14);
		//���� �� �ޱ�
		int read_left = sensor_left();
		int read_right = sensor_right();

		//���� �� �� �� ����
		if (read_left == 0 && read_right == 0) {
			printf("����\n");
			move_car(&car , 50, 50);
		}
		else if(read_left == 1 && read_right == 0) {
			printf("��ȸ��\n");
			move_car(&car, 30, 50);
		}
		else if (read_left == 0 && read_right == 1) {
			printf("��ȸ��\n");
			move_car(&car, 50, 30);
		}
		else { // ���� ������ �Ѵ� 1, ���� , ����
			printf("����\n");
			move_car(&car, 0, 0);
			break;
		}
		draw(&car);
		gotoxy(0, 15);
		print_status(&car);
		Sleep(1000); //usleep(1000000);
		system("cls");
	}


	/*printf("������ �������� �ӵ� 20���� �̵��Ѵ�.\n");
	move_car(&car , 20, 'E');
	print_status(&car);*/
}


//carMain.c