#pragma once
#include "secpilot.h"
#include <string>
using namespace std;

class captain : public secpilot //��������� - ��������� ������ ���. ����������
{
public:
	captain() : secpilot() {}
	captain(string tsurname, string tname, string tpatron, string tbirthdate, string tgender, int texp, int tsalary, int trating) : Deputy_captain(tsurname, tname, tpatron, tbirthdate, tgender, texp, tsalary, trating) {}
	void dismisspilot(pilot*); //(�������� �������)
	void who(); //������������ ������ ����������� �������
};