#include "stdafx.h"
#include "DlgCommand.h"


CDlgCommand::CDlgCommand(string sName, ptDlgCommandFunc pFunc)
{
	m_sName = sName;
	m_pFunc = pFunc;
}


CDlgCommand::~CDlgCommand(void)
{
}


void CDlgCommand::Run(CWorkspace& ws)
{
	m_pFunc(ws);
}