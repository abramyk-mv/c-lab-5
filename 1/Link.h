#pragma once
#include "stdafx.h"
#include "DataChain.h"

class CLink
{
public:
	CLink(CDataChain& refChain);
	virtual ~CLink(void);
	//����� ����"����� ��"��� �� �������� � �����������
	bool Attach(const char* sSubStr);
	//������������ ���� �� �������
	virtual void Output();
	//������ ��"��� � ��������� ������
	virtual bool Save(std::ostream& so);
	//����� ��"��� �� �������� ������
	virtual bool Load(std::istream& is);
protected:
	//��������� �� ��������� � ������ �����������
	CDataChain& m_refChain;
	//������� ������� � ����� �����������
	int m_nPos;
	//������� ��������, �� ��� ����"������� ��"���
	int m_nSize;
};

