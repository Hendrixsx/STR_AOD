#include "project.h"

Project::Project()
{
	setBudget(0);
}
Project::Project(string tname, string tstartdate, string tfinishdate, int tbudget) {
	setName(tname);
	setStartdate(tstartdate);
	setFinishdate(tfinishdate);
	setBudget(tbudget);
}
Project::~Project() {}
void Project::setName(string tname)
{
	name = tname;
}
void Project::setStartdate(string tstartdate)
{
	startdate = tstartdate;
}
void Project::setFinishdate(string tfinishdate)
{
	finishdate = tfinishdate;
}
void Project::setBudget(int tbudget)
{
	budget = tbudget;
}
string Project::getName()
{
	return name;
}
string Project::getStartdate()
{
	return startdate;
}
string Project::getFinishdate()
{
	return finishdate;
}
int Project::getBudget()
{
	return budget;
}