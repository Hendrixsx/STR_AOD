#include "passenger.h"
#include <iostream>

passenger::passenger() {}
passenger::passenger(string tsurname, string tname, string tpatron, string tbirthdate, string tphone, string tmail)
{
	setSurname(tsurname);
	setName(tname);
	setPatron(tpatron);
	setBirthdate(tbirthdate);
	setPhone(tphone);
	setMail(tmail);
}
passenger::~passenger() {}
void passenger::setSurname(string tsurname) {
	surname = tsurname;
}
void passenger::setName(string tname) {
	name = tname;
}
void passenger::setPatron(string tpatron) {
	patron = tpatron;
}
void passenger::setBirthdate(string tbirthdate) {
	birthdate = tbirthdate;
}
void passenger::setPhone(string tphone) {
	phone = tphone;
}
void passenger::setMail(string tmail) {
	mail = tmail;
}
string passenger::getSurname()
{
	return surname;
}
string passenger::getName()
{
	return name;
}
string passenger::getPatron()
{
	return patron;
}
string passenger::getBirthdate()
{
	return birthdate;
}
string passenger::getPhone()
{
	return phone;
}
string passenger::getMail()
{
	return mail;
}
void passenger::printInfo() {
	cout << "--------------------------------------------------" << endl;
	cout << "Фамилия: " << surname << endl;
	cout << "Имя: " << name << endl;
	cout << "Отчество: " << patron << endl;
	cout << "Дата рождения: " << birthdate << endl;
	cout << "Телефон: " << phone << endl;
	cout << "Почта: " << mail << endl;
	cout << "--------------------------------------------------" << endl;
}