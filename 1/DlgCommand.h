#pragma once
#include "stdafx.h"
#include "Workspace.h"


typedef void(*ptDlgCommandFunc)(CWorkspace& ws);
class CDlgCommand
{
public:
	CDlgCommand(string sName, ptDlgCommandFunc pFunc = NULL);
	~CDlgCommand(void);

	//Отримання назви команди
	string GetName() { return m_sName.c_str(); }
	//Виклик зв"язаної функції
	void Run(CWorkspace& ws);
private:
	//Назва команди
	string m_sName;
	//Вказівник на функцію, що буде використовуватися для виконання користувацьких команд
	ptDlgCommandFunc m_pFunc;
};

