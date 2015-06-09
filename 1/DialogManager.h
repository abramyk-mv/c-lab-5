#pragma once
#include "stdafx.h"
#include"Workspace.h"
#include"DlgCommand.h"
#include<vector>
class CDialogManager
{
public:
	CDialogManager(CWorkspace& ws);
	~CDialogManager(void);
	//Реєструє нову команду з ім"ям sName і функцією pFunc
	void RegisterCommand(string sName, ptDlgCommandFunc pFunc);
	//Виконує цикл обробки команд користувача
	void Run();
private:
	//Вектор вказівників на зареєстровані команди
	vector<CDlgCommand*> m_aCommands;
	//Зсилка на робочий простір
	CWorkspace& m_refWorkspace;
};

