#pragma once
#include "pilot.h"
#include "secpilot.h"
#include "captain.h"
/*class Team  //Реализация массивом
{
private:
Employee squadlist[10]; //Массив работников
public:
Team(int);
Team::~Team() {}
void printTeam(int);
};*/

/*struct element   //Реализация односвязным списком
{
Employee x;
element *next;
};
class Team
{
element *head; //Указатель на голову списка
public:
Team(); //Конструктор
~Team(); //Деструктор
void add(pilot x); //Функция для добавления значений в список
void show(); //Функция для отображения списка на экране
};*/

class Team  //Реализация очередью с приоритетом
{
private:
	pilot *que; //Очередь
	int *pri; //Приоритет
	int max; //Максимальный размер очереди
	int len; //Текущий размер очереди

public:
	Team(int);
	~Team();
	void add(pilot);  //Добавление сотрудника
	pilot extractMaxRate(); //Получение сотрудника с максимальным рейтингом
	pilot extractMinRate(); //Получение сотрудника с минимальным рейтингом
	void clear(); //Очистка очереди
	bool isEmpty(); //Проверка существования элементов в очереди
	bool isFull(); //Проверка на переполнение очереди
	int getCount(); //Количество элементов в очереди
	void show(); //Вывод очереди
};