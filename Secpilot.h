#pragma once
#include "pilot.h"
#include <string>
using namespace std;

class secpilot : public pilot //Зам. начальника - наследник класса работник
{
public:
	secpilot() : pilot() {}
	secpilot(string tsurname, string tname, string tpatron, string tbirthdate, string tgender, int texp, int tsalary, int trating) : pilot(tsurname, tname, tpatron, tbirthdate, tgender, texp, tsalary, trating) {}
	void raiseSalary(pilot&, int); //Повышение зарплаты работнику
	void reduceSalary(pilot&, int); //Понижение зарплаты сотруднику
	void who(); //Демонстрация работы виртуальной функции
};