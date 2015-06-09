#include "stdafx.h"
#include "DataSimple.h"


CDataSimple::CDataSimple()
{
}


CDataSimple::~CDataSimple()
{
}
void CDataSimple::Generate(int nDepth, int nMaxLength){
	std::string temp;
	temp = "";
	for (int i = 0; i<nMaxLength; i++)
	{
		temp += std::to_string(static_cast<long long>(rand() % nDepth));
	}
	CDataSimple::m_sChain = temp;
}