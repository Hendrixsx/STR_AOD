#include "secpilot.h"
#include <iostream>

void secpilot::raiseSalary(pilot &objpilot, int tsalary) //��������� �������� ��������� �� tsalary
{
	objpilot.setSalary(objpilot.getSalary() + tsalary);
}

void secpilot::reduceSalary(pilot &objpilot, int tsalary) //��������� �������� ��������� �� tsalary
{
	if (objpilot.getSalary() >= tsalary)
		objpilot.setSalary(objpilot.getSalary() - tsalary);
	else
		cout << "���������� �������� ��������" << endl;
}

void secpilot::who() {
	cout << "����������� ����������" << endl;
}