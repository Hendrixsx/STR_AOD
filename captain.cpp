#include "captain.h"
#include <iostream>

void captain::dismisscaptain(pilot* objpilot) //(�������� �������)
{
	objEmployee->~pilot();
	cout << "����� �� �����������" << endl;
}

void captain::who() {
	cout << "���������" << endl;
}