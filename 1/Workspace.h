#pragma once
#include "DataChain.h"
#include "stdafx.h"
#include "Link.h"
#include <vector>

class CWorkspace
{
public:
	CWorkspace(CDataChain& data);
	~CWorkspace(void);
	//�������� ����� ����������� ����
	void Init(int, int);
	//������� ������ �� ������ ����������� ����.
	string GetChainString();
	//������ ���� Workspace � ���� sFilepath
	bool Save(string&);
	//³������� ���� Workspace �� ����� sFilepath
	bool Load(string&);
	string FindSubstring();
	//�������� ��� pLink � ������ � ������� ������� nStartPos �� �������� nLength
	bool AddLink(int nStartPos, int nLength, CLink* pLink);
	//������� ��� �� ������ � ������� �������(� ������) nPosInList
	bool RemoveLink(int nPosInList);
	//������� �� ����, �� ������� � ������
	bool GetAllLinks();
	void ShowAllLinks();
	//�������� ����� ��� ���� URL ��� ������� ��������� �������� sSubStr
	bool AddURL(const char* sSubStr, const char* sURL);
	//�������� ����� ��� ���� Person ��� ������� ��������� �������� sSubStr
	bool AddPerson(const char* sSubStr, int nGroup, const char* sName);
private:
	//������ �� ��������� (���������� �� CDataChain) �� �����������
	CDataChain& m_refChain;
	//������ ����
	vector<CLink*> m_aLinks;
};