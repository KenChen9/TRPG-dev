#include<iostream>
#include<string>
#include<time.h>
#include"Quest.h"
void SetColor(int f = 7, int b = 0)
{
	unsigned short ForeColor = f + 16 * b;
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, ForeColor);
}
using namespace std;
void NpcSay(string a)
{
	string b;
	for (int p = 0; p < a.length(); p+=2)
	{
		cout << b.assign(a, p, 2);
		Sleep(85);
	}
	cout << endl;
}
string Npc(int MapNumber)
{
	if (MapNumber == 1)
	{
		return "1.�@��   2.�@���`�ڥXBUG�����TNPC";
	}
}
void NpcTK(int MapNumber,int NPC)
{
	if (MapNumber == 1)
	{
		switch (NPC)
		{
		case 1:
			SetColor(5, 15);
			NpcSay("���w �P��KolinFox���ڭ̦���ֳt�إ߹�ܪ���k");
			NpcSay("�ĤG����� �A���P�ª����ɰ�");
			SetColor();
			cout << endl << endl;
			break;
		case 2:
			SetColor(5, 15);
			NpcSay("�i���i�H���ڮ����@�����೾�M�@���p�۩�? �ӥB�a���ڤ@���H�۩M�@�ڦФ�");
			SetColor();
			break;
		}
	}
}
