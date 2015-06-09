#pragma once
#include "stdafx.h"
#include "string"

using namespace std;


class CDataChain
{
public:
	CDataChain(void);
	virtual ~CDataChain(void);

	virtual void Generate(int nDepth, int nMaxLength = 0) = 0;//віртуальна функція, що має генерувати повну послідовність цифр.

	size_t GetLength();//повертає довжину згенерованої послідовності цифр.

	int Find(const char* sSubStr, int nPos = 0);//повертає позицію входження підстрічки sSubStr починаючи із nPos. -1, якщо підстрічки не знайдено

	string GetSubStr(int nPos, int nLength = -1);//повертає підстрічку починаючи із nPos довжиною nLength. або до кінця послідовності

	string GetFullString();//повертає всю згенеровану послідовність цифр
protected:
	//стрічка із згенерованою послідовністю цифр
	string m_sChain;
};

