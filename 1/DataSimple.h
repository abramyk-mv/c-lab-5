#pragma once
#include "DataChain.h"

class CDataSimple : public CDataChain
{
public:
	CDataSimple();
	~CDataSimple();
	//��������� ���������� ����� ����������� ����
	void Generate(int nDepth, int nMaxLength = 0);
};