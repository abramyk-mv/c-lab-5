#include "stdafx.h"
#include "iostream"
#include "LinkPerson.h"


CLinkPerson::CLinkPerson(CDataChain& refChain, int nGroupCode, string sName) : CLink(refChain)
{
	m_nGroupCode = nGroupCode;
	m_sName = sName;
}


CLinkPerson::~CLinkPerson(void)
{
}
void CLinkPerson::Output()
{
	cout << endl << "Person_Link";
	cout << endl << "       m_nGroupCode - " << m_nGroupCode << endl;
	cout << endl << "       m_sName - " << m_sName << endl;
}