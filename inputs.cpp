/**
*@file  inputs.cpp
*@author ��������� �.�., ��. 515�
*@date 19 ���� 2020
*@brief ������������ ������
*
*/
#include "Header.h"

void random(int j[]) {
	srand(time(0));
	int i;
	for (i = 0; i < RAND_MAX; i++) {	//������������ ��������� ������ �����
		j[i] = rand() % 21 - 10;		//���������� ����� �������� ���������
		printf("%d ", j[i]);
	}
}

void user(int j[]) {
	printf("Input %i numbers: ", RAND_MAX);	//������������ ������ ����� � ������ 
	for (int i = 0; i < RAND_MAX; i++) {
		scanf_s("%d", &j[i]);				//������ ����� � ������
	}
}
