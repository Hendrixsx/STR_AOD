#pragma once
#include "passenger.h"
#include <string>
using namespace std;
#define MAX 256

class Hash_pass {
private:
	struct htype {
		Client val;  //объект
		struct htype *next;  //указатель на следующий объект в списке коллизий
	} mas[MAX];
public:
	Hash_pass();
	~Hash_pass();
	int hashf(string);  //хэш-функция
	void addMas(passenger*);  //добавление элемента в хэш-таблицу
	void addKol(struct htype*, struct htype*);  //добавление элемента в список коллизий
	passenger* find(string);  //поиск объека в хэш-таблице
	void printHashTable(void);  //вывод таблицы в консоль
};