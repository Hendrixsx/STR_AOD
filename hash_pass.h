#pragma once
#include "passenger.h"
#include <string>
using namespace std;
#define MAX 256

class Hash_pass {
private:
	struct htype {
		Client val;  //������
		struct htype *next;  //��������� �� ��������� ������ � ������ ��������
	} mas[MAX];
public:
	Hash_pass();
	~Hash_pass();
	int hashf(string);  //���-�������
	void addMas(passenger*);  //���������� �������� � ���-�������
	void addKol(struct htype*, struct htype*);  //���������� �������� � ������ ��������
	passenger* find(string);  //����� ������ � ���-�������
	void printHashTable(void);  //����� ������� � �������
};