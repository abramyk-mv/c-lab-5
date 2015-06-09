#include "stdafx.h"
#include "DataChain.h"

CDataChain::CDataChain(void)
{
}

CDataChain::~CDataChain(void)
{
}

void CDataChain::Generate(int nDepth, int nMaxLength){};

std::string CDataChain::GetFullString()
{
	return m_sChain;
}

int CDataChain::Find(const char* sSubStr, int nPos)
{
	return m_sChain.find(sSubStr, nPos);
}

std::string CDataChain::GetSubStr(int nPos, int nLength)
{
	return m_sChain.substr(nPos, nLength);
}

std::size_t CDataChain::GetLength()
{
	return m_sChain.length();
}