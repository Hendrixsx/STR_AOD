#include "pilot.h"
#include <iostream>

Employee::Employee()
{
	setExp(0);
	setSalary(0);
}
pilot::pilot(string tsurname, string tname, string tpatron, string tbirthdate, string tgender, int texp, int tsalary, int trating)
{
	setSurname(tsurname);
	setName(tname);
	setPatron(tpatron);
	setBirthdate(tbirthdate);
	setGender(tgender);
	setExp(texp);
	setSalary(tsalary);
	setRating(trating);
}
pilot::~pilot() {}
void pilot::setSurname(string tsurname)
{
	surname = tsurname;
}
void pilot::setName(string tname)
{
	name = tname;
}
void pilot::setPatron(string tpatron)
{
	patron = tpatron;
}
void pilot::setBirthdate(string tbirthdate)
{
	birthdate = tbirthdate;
}
void pilot::setGender(string tgender)
{
	gender = tgender;
}
void pilot::setExp(int texp)
{
	exp = texp;
}
void pilot::setSalary(int tsalary)
{
	salary = tsalary;
}
void pilot::setRating(int trating)
{
	rating = trating;
}
string pilot::getSurname()
{
	return surname;
}
string pilot::getName()
{
	return name;
}
string pilot::getPatron()
{
	return patron;
}
string pilot::getBirthdate()
{
	return birthdate;
}
string pilot::getGender()
{
	return gender;
}
int pilot::getExp()
{
	return exp;
}
int pilot::getSalary()
{
	return salary;
}
int pilot::getRating()
{
	return rating;
}
void pilot::printInfo()
{
	cout << "--------------------------------------------------" << endl;
	cout << "�������: " << surname << endl;
	cout << "���: " << name << endl;
	cout << "��������: " << patron << endl;
	cout << "���� ��������: " << birthdate << endl;
	cout << "��� (�/�): " << gender << endl;
	cout << "���� ������: " << exp << endl;
	cout << "���������� �����:" << salary << endl;
	cout << "�������:" << rating << endl;
	cout << "--------------------------------------------------" << endl;
}
void pilot::who()
{
	cout << "������� ������� ���������" << endl;
}