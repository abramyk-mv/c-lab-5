// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "DataChain.h"
#include "DataSimple.h"
#include "Workspace.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CDataSimple data;
	CWorkspace ws(data);
	return 0;
}

