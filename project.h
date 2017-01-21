#pragma once
using namespace std;

class Project
{
private:
	string
		name,
		startdate,
		finishdate;
	int
		budget;
public:
	Project();
	Project(string, string, string, int);
	Project::~Project();
	void setName(string);
	void setStartdate(string);
	void setFinishdate(string);
	void setBudget(int);
	string getName();
	string getStartdate();
	string getFinishdate();
	int getBudget();
};