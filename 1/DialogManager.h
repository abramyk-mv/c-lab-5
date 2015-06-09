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
	//������ ���� ������� � ��"�� sName � �������� pFunc
	void RegisterCommand(string sName, ptDlgCommandFunc pFunc);
	//������ ���� ������� ������ �����������
	void Run();
private:
	//������ ��������� �� ����������� �������
	vector<CDlgCommand*> m_aCommands;
	//������ �� ������� ������
	CWorkspace& m_refWorkspace;
};

