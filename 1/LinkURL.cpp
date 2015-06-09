#include "stdafx.h"
#include "iostream"
#include "LinkURL.h"


LinkURL::LinkURL(CDataChain& refChain, string sURL) : CLink(refChain)
{
	m_sURL = sURL;
}


LinkURL::~LinkURL(void)
{
}

void LinkURL::Output()
{
	cout << endl << "URL_Link";
	cout << endl << "         " << m_sURL << endl;
}

bool LinkURL::Load(istream& is)
{
	return false;
}

bool LinkURL::Save(ostream& so)
{
	return false;
}