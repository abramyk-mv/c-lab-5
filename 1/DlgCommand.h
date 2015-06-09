#pragma once
#include "stdafx.h"
#include "Workspace.h"


typedef void(*ptDlgCommandFunc)(CWorkspace& ws);
class CDlgCommand
{
public:
	CDlgCommand(string sName, ptDlgCommandFunc pFunc = NULL);
	~CDlgCommand(void);

	//��������� ����� �������
	string GetName() { return m_sName.c_str(); }
	//������ ��"����� �������
	void Run(CWorkspace& ws);
private:
	//����� �������
	string m_sName;
	//�������� �� �������, �� ���� ����������������� ��� ��������� �������������� ������
	ptDlgCommandFunc m_pFunc;
};

