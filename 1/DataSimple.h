#pragma once
#include "DataChain.h"

class CDataSimple : public CDataChain
{
public:
	CDataSimple();
	~CDataSimple();
	//Реалізація генератора повної послідовності цифр
	void Generate(int nDepth, int nMaxLength = 0);
};