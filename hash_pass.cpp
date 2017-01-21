#include "hash_pass.h"

Hash_pass::Hash_pass() {
	for (int i = 0; i < MAX; i++) {
		mas[i].next = NULL;
	}
}

Hash_pass::~Hash_pass() {}

//���-�������
int Hash_pass::hashf(string str)
{
	int h = 0;
	for (int i = 0; str[i]; i++)
		h = h + str[i];
	h = h % MAX;
	return abs(h);
}

//���������� ������� � ���-�������
void Hash_pass::addMas(passenger *v)
{
	int h;
	struct htype *p;
	h = hashf(v->getSurname());
	if (mas[h].val.getSurname() == "") { //���� ������ ������� �����, �� �������� ������� ����
		mas[h].val = *v;
		return;
	}
	p = new htype; //����� ������� ����� ��������� � �������� �� � ������ ��������
	p->next = NULL;
	p->val = *v;
	addKol(p, &mas[h]);
}

//���������� �������� � ������ ��������
void Hash_pass::addKol(struct htype *i, struct htype *start)
{
	struct htype *old, *p;
	old = start;
	while (start) {  //����� ����� ������
		old = start;
		start = start->next;
	}
	old->next = i;  //������� � ����� �������
	i->next = NULL;
}

//����� ������� �� �������
Passenger* Hash_pass::find(string surname)
{
	int h, loc;
	struct htype *p;
	h = hashf(surname);
	//������� ��������, ���� ������ �������
	if (mas[h].val.getSurname() == surname) return(&mas[h].val);
	else { //� ��������� ������ ����������� ������ ��������
		p = mas[h].next;
		while (p) {
			if (p->val.getSurname() == surname) return &p->val;
			p = p->next;
		}
		return NULL;
	}
}

//����� ����������� ���-�������
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