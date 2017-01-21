#pragma once
#include <string>
using namespace std;

class Pilot
{
private:
	string
		surname,
		name,
		patron,
		birthdate,
		gender;
	int
		exp, //Стаж работы
		salary, //Зарплата
		rating; //Рейтинг
public:
	Pilot();
	Pilot(string, string, string, string, string, int, int, int);
	Pilot::~Pilot();
	void setSurname(string);
	void setName(string);
	void setPatron(string);
	void setBirthdate(string);
	void setGender(string);
	void setExp(int);
	void setSalary(int);
	void setRating(int);
	string getSurname();
	string getName();
	string getPatron();
	string getBirthdate();
	string getGender();
	int getExp();
	int getSalary();
	int getRating();
	void printInfo(); //Вывод информации об объекте
	virtual void who(); //Демонстрация работы виртуальной функции
};