#include <iostream>
#include "team.h"

/*Team::Team(int l)  //Реализация обычным статическим массивом
{
string
tsurname,
tname,
tpatron,
tbirthdate,
tgender;
int
texp,
tsalary,
trating;
for (int i = 0; i < l; i++)
{
cout << "Пилот №" << i + 1 << endl;
cout << "Фамилия: "; cin >> tsurname;
cout << "Имя: "; cin >> tname;
cout << "Отчество: "; cin >> tpatron;
cout << "Дата рождения: "; cin >> tbirthdate;
cout << "Пол (М/Ж): "; cin >> tgender;
cout << "Стаж работы: "; cin >> texp;
cout << "Заработная плата: "; cin >> tsalary;
cout << "Рейтинг: "; cin >> trating;
Employee objEmployee(tsurname, tname, tpatron, tbirthdate, tgender, texp, tsalary, trating);
Team::squadlist[i] = objEmployee;
}
}
void Team::printTeam(int l)
{
for (int i = 0; i < l; i++)
{
cout << "Пилот №" << i + 1 << endl;
cout << "Фамилия: " << squadlist[i].getSurname() << endl;
cout << "Имя: " << squadlist[i].getName() << endl;
cout << "Отчество: " << squadlist[i].getPatron() << endl;
cout << "Дата рождения: " << squadlist[i].getBirthdate()<< endl;
cout << "Пол (М/Ж): " << squadlist[i].getGender() << endl;
cout << "Стаж работы: " << squadlist[i].getExp() << endl;
cout << "Заработная плата: " << squadlist[i].getSalary() << endl;
cout << "Рейтинг: " << squadlist[i].getRating() << endl;
}
}*/

/*Team::Team()   //Реализация односвязным списком
{
head = NULL;
}
Team::~Team()
{
while (head != NULL)
{
element *temp = head->next;
delete head;
head = temp;
}
}
void Team::add(Employee x)
{
element *temp = new element;
temp->x = x;
temp->next = head;
head = temp;
}
void Team::show()
{
element *temp = head;
while (temp != NULL)
{
cout << "Фамилия: " << temp->x.getSurname() << endl;
cout << "Имя: " << temp->x.getName() << endl;
cout << "Отчество: " << temp->x.getPatron() << endl;
cout << "Дата рождения: " << temp->x.getBirthdate() << endl;
cout << "Пол (М/Ж): " << temp->x.getGender() << endl;
cout << "Стаж работы: " << temp->x.getExp() << endl;
cout << "Заработная плата: " << temp->x.getSalary() << endl;
cout << "Рейтинг: " << temp->x.getRating() << endl;
temp = temp->next;
}
}*/

//Реализация очередью с приоритетом

Team::Team(int m) //создание очереди
{
	max = m; //получаем размер
	que = new pilot[max]; //создаем очередь
	pri = new int[max]; //создаем массив приоритетов
	len = 0;
}

Team::~Team()  //удаление очереди
{
	delete[] que;
	delete[] pri;
}

void Team::show() {  //демонстрация очереди
	for (int i = 0; i<len; i++) {
		que[i].printInfo();
	}
}

void Team::clear() //очистка очереди 
{
	len = 0;
}

bool Team::isEmpty() //пуста ли очередь
{
	return len == 0;
}

bool Team::isFull() //полна ли очередь
{
	return len == max;
}

int Team::getCount() //количество присутствующих в стеке элементов
{
	return len;
}

void Team::add(pilot c) //добавление элемента
{
	if (!isFull()) {
		que[len] = c;
		pri[len] = c.getRating();
		len++;
	}
}

pilot Team::extractMaxRate()
{
	int maxpri = pri[0];
	int posmaxpri = 0;
	for (int i = 1; i<len; i++)
		if (maxpri<pri[i]) {
			maxpri = pri[i];
			posmaxpri = i;
		}
	pilot t1 = que[posmaxpri];
	int t2 = pri[posmaxpri];
	for (int i = posmaxpri; i<len - 1; i++) {
		que[i] = que[i + 1];
		pri[i] = pri[i + 1];
	}
	len--;
	return t1;
}

pilot Team::extractMinRate()
{
	int minpri = pri[0];
	int posminpri = 0;
	for (int i = 1; i<len; i++)
		if (minpri>pri[i]) {
			minpri = pri[i];
			posminpri = i;
		}
	pilot t1 = que[posminpri];
	int t2 = pri[posminpri];
	for (int i = posminpri; i<len - 1; i++) {
		que[i] = que[i + 1];
		pri[i] = pri[i + 1];
	}
	len--;
	return t1;
}