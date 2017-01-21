#include "hash_pass.h"

Hash_pass::Hash_pass() {
	for (int i = 0; i < MAX; i++) {
		mas[i].next = NULL;
	}
}

Hash_pass::~Hash_pass() {}

//Хэш-функция
int Hash_pass::hashf(string str)
{
	int h = 0;
	for (int i = 0; str[i]; i++)
		h = h + str[i];
	h = h % MAX;
	return abs(h);
}

//Добавление объекта в хэш-таблицу
void Hash_pass::addMas(passenger *v)
{
	int h;
	struct htype *p;
	h = hashf(v->getSurname());
	if (mas[h].val.getSurname() == "") { //если ячейка массива пуста, то добавить элемент туда
		mas[h].val = *v;
		return;
	}
	p = new htype; //иначе создать новую структуру и добавить ее в список коллизий
	p->next = NULL;
	p->val = *v;
	addKol(p, &mas[h]);
}

//Добавление элемента в список коллизий
void Hash_pass::addKol(struct htype *i, struct htype *start)
{
	struct htype *old, *p;
	old = start;
	while (start) {  //найти конец списка
		old = start;
		start = start->next;
	}
	old->next = i;  //связать с новой записью
	i->next = NULL;
}

//Поиск объекта по фамилии
Passenger* Hash_pass::find(string surname)
{
	int h, loc;
	struct htype *p;
	h = hashf(surname);
	//вернуть значение, если ячейка найдена
	if (mas[h].val.getSurname() == surname) return(&mas[h].val);
	else { //в противном случае просмотреть список коллизий
		p = mas[h].next;
		while (p) {
			if (p->val.getSurname() == surname) return &p->val;
			p = p->next;
		}
		return NULL;
	}
}

//Вывод содержимого хэш-таблицы
void Hash_pass::printHashTable() {
	struct htype p;
	for (int i = 0; i < MAX; i++)
	{
		p = mas[i];
		if (p.val.getSurname() != "") {
			while (p.next != NULL) {
				p.val.printInfo();
				if (p.next != NULL)
					p = *p.next;
			};
			p.val.printInfo();
		}
	}
}