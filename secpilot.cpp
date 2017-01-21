#include "secpilot.h"
#include <iostream>

void secpilot::raiseSalary(pilot &objpilot, int tsalary) //Повышение зарплаты работнику на tsalary
{
	objpilot.setSalary(objpilot.getSalary() + tsalary);
}

void secpilot::reduceSalary(pilot &objpilot, int tsalary) //Понижение зарплаты работнику на tsalary
{
	if (objpilot.getSalary() >= tsalary)
		objpilot.setSalary(objpilot.getSalary() - tsalary);
	else
		cout << "Невозможно понизить зарплату" << endl;
}

void secpilot::who() {
	cout << "Заместитель начальника" << endl;
}