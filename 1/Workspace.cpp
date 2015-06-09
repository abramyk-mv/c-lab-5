#include "stdafx.h"
#include "iostream"
#include "Workspace.h"
#include "DataChain.h"
#include "Link.h"
#include "LinkURL.h"
#include "LinkPerson.h"
#include "fstream" 
#include <vector>
using namespace std;

CWorkspace::CWorkspace(CDataChain& data) :m_refChain(data)
{};


CWorkspace::~CWorkspace(void)
{
}
void CWorkspace::Init(int nDepth, int nLength)
{
	CWorkspace::m_refChain.Generate(nDepth, nLength);
}

string CWorkspace::GetChainString()
{
	return CWorkspace::m_refChain.GetFullString();
}


bool CWorkspace::Save(string& sFilepath)
{
	bool result = true;
	try
	{
		string strChain = GetChainString();
		ofstream file;
		file.open(sFilepath);
		file << strChain;
		file.close();
	}
	catch (ofstream::failure ex)
	{
		cout << "fail to save file";
		result = false;
	}
	return result;
}

bool CWorkspace::Load(string& sFilepath)
{
	bool result = true;
	try
	{
		string strResult;
		ifstream  file(sFilepath);
		file >> strResult;
		cout << strResult;
	}
	catch (ifstream::failure ex)
	{
		cout << "fail to load file";
		result = false;
	}
	return result;
}

bool CWorkspace::AddLink(int nStartPos, int nLength, CLink* pLink)
{
	return false;
}

bool CWorkspace::RemoveLink(int nPosInList)
{
	return false;
}

bool CWorkspace::GetAllLinks()
{
	return false;
}

void CWorkspace::ShowAllLinks()
{
	for (int i = 0; i<m_aLinks.size(); i++)
	{
		m_aLinks[i]->Output();
	}
}

bool CWorkspace::AddURL(const char* sSubStr, const char* sURL)
{
	CLink* newObject = new LinkURL(m_refChain, sURL);
	if (newObject->Attach(sSubStr))
	{
		m_aLinks.push_back(newObject);
		return true;
	}
	return false;
}

bool CWorkspace::AddPerson(const char* sSubStr, int nGroup, const char* sName)
{
	CLink* newObject = new CLinkPerson(m_refChain, nGroup, sName);
	if (newObject->Attach(sSubStr))
	{
		m_aLinks.push_back(newObject);
		return true;
	}
	return false;
}