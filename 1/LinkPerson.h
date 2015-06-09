#pragma once
#include "stdafx.h" 
#include "Link.h"

class CLinkPerson : public CLink
{
public:
	CLinkPerson(CDataChain& refChain, int nGroupCode, std::string sName);
	virtual ~CLinkPerson(void);
	virtual void Output();
private:
	int m_nGroupCode;
	std::string m_sName;
};

