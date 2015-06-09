#pragma once
#include "stdafx.h"
#include "string"

using namespace std;


class CDataChain
{
public:
	CDataChain(void);
	virtual ~CDataChain(void);

	virtual void Generate(int nDepth, int nMaxLength = 0) = 0;//��������� �������, �� �� ���������� ����� ����������� ����.

	size_t GetLength();//������� ������� ����������� ����������� ����.

	int Find(const char* sSubStr, int nPos = 0);//������� ������� ��������� �������� sSubStr ��������� �� nPos. -1, ���� �������� �� ��������

	string GetSubStr(int nPos, int nLength = -1);//������� �������� ��������� �� nPos �������� nLength. ��� �� ���� �����������

	string GetFullString();//������� ��� ����������� ����������� ����
protected:
	//������ �� ������������ ����������� ����
	string m_sChain;
};

