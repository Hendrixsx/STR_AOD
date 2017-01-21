#pragma once
#include <string>
using namespace std;

class passenger
{
private:
	string
		surname,
		name,
		patron,
		birthdate,
		phone,
		mail;
public:
	passenger();
	passenger(string, string, string, string, string, string);
	~passenger();
	void setSurname(string);
	void setName(string);
	void setPatron(string);
	void setBirthdate(string);
	void setPhone(string);
	void setMail(string);
	string getSurname();
	string getName();
	string getPatron();
	string getBirthdate();
	string getPhone();
	string getMail();
	void printInfo(); //Вывод информации об объекте
};