#include <iostream>
#include <fstream>
#include <windows.h>
#include "pilot.h"
#include "secpilot.h"
#include "captain.h"
#include "team.h"
#include "passenger.h"
#include "hash_pass.h"
#include "project.h"

int main() {
	int p = 1;
	int texp, tsalary, trating, l;
	string
		surname,
		tsurname,
		tname,
		tpatron,
		tbirthdate,
		tphone,
		tmail,
		tgender;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Работа с односвязным списком сотрудников
	/*cout << "Введите количество рядовых сотрудников: "; cin >> l;
	Team objTeam;
	for (int i = 0; i < l; i++)
	{
	cout << "pilot №" << i + 1 << endl;
	cout << "Фамилия: "; cin >> tsurname;
	cout << "Имя: "; cin >> tname;
	cout << "Отчество: "; cin >> tpatron;
	cout << "Дата рождения: "; cin >> tbirthdate;
	cout << "Пол (М/Ж): "; cin >> tgender;
	cout << "Стаж работы: "; cin >> texp;
	cout << "Заработная плата: "; cin >> tsalary;
	(tsurname, tname, tpatron, tbirthdate, tgender, texp, tsalary);
	objTeam.Add(obj);
	}
	objTeam.Show();*/

	//Работа с очередью из приоритетов
	/* cout << "Введите количество рядовых сотрудников: "; cin >> l;
	Team que(l);
	cout << "--------------------------------------------------" << endl;
	for (int i = 0; i < l; i++) {
	cout << "pilot №" << i + 1 << endl;
	cout << "Фамилия: "; cin >> tsurname;
	cout << "Имя: "; cin >> tname;
	cout << "Отчество: "; cin >> tpatron;
	cout << "Дата рождения: "; cin >> tbirthdate;
	cout << "Пол (М/Ж): "; cin >> tgender;
	cout << "Стаж работы: "; cin >> texp;
	cout << "Заработная плата: "; cin >> tsalary;
	cout << "Рейтинг: "; cin >> trating;
	Employee objx(tsurname, tname, tpatron, tbirthdate, tgender, texp, tsalary, trating);
	que.add(objx);
	}
	cout << "--------------------------------------------------" << endl;
	que.show();
	que.extractMaxRate().printInfo();*/

	//Работа с хеш-таблицей клиентов
	ifstream fin("inp.txt");
	Hash_pass objHashpass;
	while (!fin.eof()) {
		fin >> tsurname;
		fin >> tname;
		fin >> tpatron;
		fin >> tbirthdate;
		fin >> tphone;
		fin >> tmail;
		passenger objpassenger(tsurname, tname, tpatron, tbirthdate, tphone, tmail);
		objHashpass.addMas(&objpassenger);
	}
	objHashpass.printHashTable();
	while (p) {
		cout << "Введите фамилию клиента, которого надо найти: "; cin >> surname;
		if (objHashpass.find(surname))
			objHashpass.find(surname)->printInfo();
		else
			cout << "Нет клиента с такой фамилией" << endl;
		cout << "Продолжить(1/0)?  "; cin >> p;
	}
	fin.close();

	//Демонстрация работы виртуальной функции
	//Если бы метод who не был виртуальным, то каждый раз срабатывал бы метод базового класса 
	/*	x emp; y dep; z ch;
	x *ptr;
	ptr = &x;  ptr->who();
	ptr = &x;  ptr->who();
	ptr = &z;   ptr->who(); */
	system("pause");
	return 0;
}