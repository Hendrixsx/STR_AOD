#pragma once
#include "pilot.h"
#include <string>
using namespace std;

class secpilot : public pilot //���. ���������� - ��������� ������ ��������
{
public:
	secpilot() : pilot() {}
	secpilot(string tsurname, string tname, string tpatron, string tbirthdate, string tgender, int texp, int tsalary, int trating) : pilot(tsurname, tname, tpatron, tbirthdate, tgender, texp, tsalary, trating) {}
	void raiseSalary(pilot&, int); //��������� �������� ���������
	void reduceSalary(pilot&, int); //��������� �������� ����������
	void who(); //������������ ������ ����������� �������
};