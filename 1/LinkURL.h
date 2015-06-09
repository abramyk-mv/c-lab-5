#pragma once
#include "Link.h"
#include "stdafx.h"
class LinkURL : public CLink
{
public:
	LinkURL(CDataChain& refChain, string sURL);
	~LinkURL(void);

	virtual bool Save(ostream& so);
	virtual void Output();
	virtual bool Load(istream& is);
private:
	string m_sURL;
};

