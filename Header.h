/**
*@file  Header.h
*@author ��������� �.�., ��. 515�
*@date 19 ���� 2020
*@brief ������������ ������
*
*/
#ifndef HEADER
#define HEADER
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RAND_MAX 1000
/*
������� ������� ��������� ������ �����
int j[i] ����������� ������ �����
*/
void random(int j[]);
/*
������������ ��� ��������� ������ �������
int j[i] ����������� ������ �����
*/
void user(int j[]);
/*
������� ���� ���� � ������� � ������� �� ����������
���� ���� ����� � �����, �������� 10, �� �� ���������
int j[i] ���������� ������ � �� ����������� �� �����
*/
void find_zeros(int j[]);
#endif // !HEADER