#include <iostream>
#include "team.h"

/*Team::Team(int l)  //���������� ������� ����������� ��������
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
cout << "����� �" << i + 1 << endl;
cout << "�������: "; cin >> tsurname;
cout << "���: "; cin >> tname;
cout << "��������: "; cin >> tpatron;
cout << "���� ��������: "; cin >> tbirthdate;
cout << "��� (�/�): "; cin >> tgender;
cout << "���� ������: "; cin >> texp;
cout << "���������� �����: "; cin >> tsalary;
cout << "�������: "; cin >> trating;
Employee objEmployee(tsurname, tname, tpatron, tbirthdate, tgender, texp, tsalary, trating);
Team::squadlist[i] = objEmployee;
}
}
void Team::printTeam(int l)
{
for (int i = 0; i < l; i++)
{
cout << "����� �" << i + 1 << endl;
cout << "�������: " << squadlist[i].getSurname() << endl;
cout << "���: " << squadlist[i].getName() << endl;
cout << "��������: " << squadlist[i].getPatron() << endl;
cout << "���� ��������: " << squadlist[i].getBirthdate()<< endl;
cout << "��� (�/�): " << squadlist[i].getGender() << endl;
cout << "���� ������: " << squadlist[i].getExp() << endl;
cout << "���������� �����: " << squadlist[i].getSalary() << endl;
cout << "�������: " << squadlist[i].getRating() << endl;
}
}*/

/*Team::Team()   //���������� ����������� �������
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
cout << "�������: " << temp->x.getSurname() << endl;
cout << "���: " << temp->x.getName() << endl;
cout << "��������: " << temp->x.getPatron() << endl;
cout << "���� ��������: " << temp->x.getBirthdate() << endl;
cout << "��� (�/�): " << temp->x.getGender() << endl;
cout << "���� ������: " << temp->x.getExp() << endl;
cout << "���������� �����: " << temp->x.getSalary() << endl;
cout << "�������: " << temp->x.getRating() << endl;
temp = temp->next;
}
}*/

//���������� �������� � �����������

Team::Team(int m) //�������� �������
{
	max = m; //�������� ������
	que = new pilot[max]; //������� �������
	pri = new int[max]; //������� ������ �����������
	len = 0;
}

Team::~Team()  //�������� �������
{
	delete[] que;
	delete[] pri;
}

void Team::show() {  //������������ �������
	for (int i = 0; i<len; i++) {
		que[i].printInfo();
	}
}

void Team::clear() //������� ������� 
{
	len = 0;
}

bool Team::isEmpty() //����� �� �������
{
	return len == 0;
}

bool Team::isFull() //����� �� �������
{
	return len == max;
}

int Team::getCount() //���������� �������������� � ����� ���������
{
	return len;
}

void Team::add(pilot c) //���������� ��������
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