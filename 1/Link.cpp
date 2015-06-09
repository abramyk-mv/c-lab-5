#include "stdafx.h"
#include "Link.h"


CLink::CLink(CDataChain& refChain) :m_refChain(refChain)
{
}


CLink::~CLink(void)
{
}

bool CLink::Attach(const char* sSubStr)
{
	int strPos = m_refChain.Find(sSubStr);
	if (strPos > -1)
	{
		m_nPos = strPos;
		m_nSize = 10;
		return true;
	}
	return false;
};

void CLink::Output()
{};

bool CLink::Save(std::ostream& so)
{
	return false;
};

bool CLink::Load(std::istream& is)
{
	return false;
};