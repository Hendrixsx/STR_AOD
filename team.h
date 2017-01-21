#pragma once
#include "pilot.h"
#include "secpilot.h"
#include "captain.h"
/*class Team  //���������� ��������
{
private:
Employee squadlist[10]; //������ ����������
public:
Team(int);
Team::~Team() {}
void printTeam(int);
};*/

/*struct element   //���������� ����������� �������
{
Employee x;
element *next;
};
class Team
{
element *head; //��������� �� ������ ������
public:
Team(); //�����������
~Team(); //����������
void add(pilot x); //������� ��� ���������� �������� � ������
void show(); //������� ��� ����������� ������ �� ������
};*/

class Team  //���������� �������� � �����������
{
private:
	pilot *que; //�������
	int *pri; //���������
	int max; //������������ ������ �������
	int len; //������� ������ �������

public:
	Team(int);
	~Team();
	void add(pilot);  //���������� ����������
	pilot extractMaxRate(); //��������� ���������� � ������������ ���������
	pilot extractMinRate(); //��������� ���������� � ����������� ���������
	void clear(); //������� �������
	bool isEmpty(); //�������� ������������� ��������� � �������
	bool isFull(); //�������� �� ������������ �������
	int getCount(); //���������� ��������� � �������
	void show(); //����� �������
};