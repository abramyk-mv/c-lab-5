#pragma once
#include "DataChain.h"
#include "stdafx.h"
#include "Link.h"
#include <vector>

class CWorkspace
{
public:
	CWorkspace(CDataChain& data);
	~CWorkspace(void);
	//Ініціалізує повну послідовність цифр
	void Init(int, int);
	//Повертає стрічку із повною послідовністю цифр.
	string GetChainString();
	//Зберігає стан Workspace у файл sFilepath
	bool Save(string&);
	//Відновлює стан Workspace із файлу sFilepath
	bool Load(string&);
	string FindSubstring();
	//Добавляє лінк pLink у список у вибрану позицію nStartPos із довжиною nLength
	bool AddLink(int nStartPos, int nLength, CLink* pLink);
	//Видаляє лінк із списку у вибраній позиції(в списку) nPosInList
	bool RemoveLink(int nPosInList);
	//Повертає всі лінки, що присутні в списку
	bool GetAllLinks();
	void ShowAllLinks();
	//Добавляє новий лінк типу URL для першого входження підстрічки sSubStr
	bool AddURL(const char* sSubStr, const char* sURL);
	//Добавляє новий лінк типу Person для першого входження підстрічки sSubStr
	bool AddPerson(const char* sSubStr, int nGroup, const char* sName);
private:
	//Зсилка на контейнер (породжений від CDataChain) із послідовністю
	CDataChain& m_refChain;
	//Список лінків
	vector<CLink*> m_aLinks;
};