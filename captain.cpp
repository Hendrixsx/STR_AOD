#include "captain.h"
#include <iostream>

void captain::dismisscaptain(pilot* objpilot) //(удаление объекта)
{
	objEmployee->~pilot();
	cout << "пилот не дееспособен" << endl;
}

void captain::who() {
	cout << "Коммандир" << endl;
}