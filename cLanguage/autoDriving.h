#pragma once
#ifndef AUTODRIVING
#define AUTODRIVING

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
typedef struct {
	int x_pos; // x�� ��ǥ
	int y_pos; //y�� ��ǥ
	int speed; //�ӵ�
	char direction; //���� - N ,S ,W ,E
}carStatus;

void init(carStatus*);// �� �ʱ�ȭ
void print_status(carStatus*); //���� ���
void move_car(carStatus*, int, int);// �� �̵�
int sensor_left();
int sensor_right();


//autoDriving.h
#endif
