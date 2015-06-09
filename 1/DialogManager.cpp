#include "stdafx.h"
#include "iostream"
#include "DialogManager.h"
#include  "DlgCommand.h"
#include <vector>


CDialogManager::CDialogManager(CWorkspace& ws) : m_refWorkspace(ws)
{
	m_aCommands.push_back(new CDlgCommand("Quit"));
}


CDialogManager::~CDialogManager()
{
}

void CDialogManager::RegisterCommand(std::string sName, ptDlgCommandFunc pFunc)
{
	m_aCommands.push_back(new CDlgCommand(sName, pFunc));
}

void CDialogManager::Run()
{
	bool exit = false;
	int nCommand;
	while (!exit)
	{
		cout << std::endl;
		for (int i = 0; i < m_aCommands.size(); i++)
			cout << i << ". " << m_aCommands[i]->GetName() << std::endl;
		cout << "Enter command:";
		cin >> nCommand;
		if (nCommand > 0)
		{
			m_aCommands[nCommand]->Run(m_refWorkspace);
		}
		else
		{
			exit = true;
		}
	}
}