// lab5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "DataChain.h"
#include "DataSimple.h"
#include "Workspace.h"
#include "DialogManager.h"

using namespace std;
void Init(CWorkspace& ws)
{
	ws.Init(5, 10);
}

void Save(CWorkspace& ws) //збереження
{
	string filePath = "lab\l5.txt";
	ws.Save(filePath);
}

void Load(CWorkspace& ws)
{
	string filePath = "lab5\l5.txt";
	ws.Load(filePath);
}

void ShowFullSequence(CWorkspace& ws)
{
	cout << ws.GetChainString() << endl;
}

void AddURL(CWorkspace& ws)
{
	string subStr;
	string linkName;
	cout << endl << "please enter subString - ";
	cin >> subStr;
	cout << "please enter name of link - ";
	cin >> linkName;
	cout << endl;

	ws.AddURL(subStr.c_str(), linkName.c_str());
}
void AddPerson(CWorkspace& ws)
{
	string subStr;
	string linkName;
	string numberOfPerson;
	cout << endl << "please enter subString - ";
	cin >> subStr;
	cout << "please enter name of link - ";
	cin >> linkName;
	cout << "please enter number of person - ";
	cin >> numberOfPerson;
	cout << endl;

	int number = atoi(numberOfPerson.c_str());
	ws.AddPerson(subStr.c_str(), number, linkName.c_str());
}
void ShowAllLinks(CWorkspace& ws)
{
	ws.ShowAllLinks();
}

int _tmain(int argc, _TCHAR* argv[])
{
	CDataSimple data;
	CWorkspace ws(data);
	CDialogManager mgr(ws);

	mgr.RegisterCommand("Init sequence", Init);
	mgr.RegisterCommand("Show sequence", ShowFullSequence);
	mgr.RegisterCommand("Save", Save);
	mgr.RegisterCommand("Load", Load);
	mgr.RegisterCommand("AddURL", AddURL);
	mgr.RegisterCommand("AddPerson", AddPerson);
	mgr.RegisterCommand("Show all links", ShowAllLinks);
	mgr.Run();
	system("pause");
	return 0;
}

