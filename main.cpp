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

	//������ � ����������� ������� �����������
	/*cout << "������� ���������� ������� �����������: "; cin >> l;
	Team objTeam;
	for (int i = 0; i < l; i++)
	{
	cout << "pilot �" << i + 1 << endl;
	cout << "�������: "; cin >> tsurname;
	cout << "���: "; cin >> tname;
	cout << "��������: "; cin >> tpatron;
	cout << "���� ��������: "; cin >> tbirthdate;
	cout << "��� (�/�): "; cin >> tgender;
	cout << "���� ������: "; cin >> texp;
	cout << "���������� �����: "; cin >> tsalary;
	(tsurname, tname, tpatron, tbirthdate, tgender, texp, tsalary);
	objTeam.Add(obj);
	}
	objTeam.Show();*/

	//������ � �������� �� �����������
	/* cout << "������� ���������� ������� �����������: "; cin >> l;
	Team que(l);
	cout << "--------------------------------------------------" << endl;
	for (int i = 0; i < l; i++) {
	cout << "pilot �" << i + 1 << endl;
	cout << "�������: "; cin >> tsurname;
	cout << "���: "; cin >> tname;
	cout << "��������: "; cin >> tpatron;
	cout << "���� ��������: "; cin >> tbirthdate;
	cout << "��� (�/�): "; cin >> tgender;
	cout << "���� ������: "; cin >> texp;
	cout << "���������� �����: "; cin >> tsalary;
	cout << "�������: "; cin >> trating;
	Employee objx(tsurname, tname, tpatron, tbirthdate, tgender, texp, tsalary, trating);
	que.add(objx);
	}
	cout << "--------------------------------------------------" << endl;
	que.show();
	que.extractMaxRate().printInfo();*/

	//������ � ���-�������� ��������
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
		cout << "������� ������� �������, �������� ���� �����: "; cin >> surname;
		if (objHashpass.find(surname))
			objHashpass.find(surname)->printInfo();
		else
			cout << "��� ������� � ����� ��������" << endl;
		cout << "����������(1/0)?  "; cin >> p;
	}
	fin.close();

	//������������ ������ ����������� �������
	//���� �� ����� who �� ��� �����������, �� ������ ��� ���������� �� ����� �������� ������ 
	/*	x emp; y dep; z ch;
	x *ptr;
	ptr = &x;  ptr->who();
	ptr = &x;  ptr->who();
	ptr = &z;   ptr->who(); */
	system("pause");
	return 0;
}