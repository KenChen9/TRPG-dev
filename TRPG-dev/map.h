#include<iostream>
#include<string>
using namespace std;
struct MAP
{
	string MapName;
	string MonsterName;
};
MAP MapData;
int PrintMonster(int map)
{
	if (map == 0)
	{
		cout << "��J1�P���೾�԰�   ��J2�P�p�۩Ǿ԰�   ��J0��^\n";
		return 1;
	}
	else if (map == 1)
	{
		cout << "�o�̨S���Ǫ�\n";
		return 0;
	}
	else if (map == 2)
	{
		cout << "��J1�P�����L�p���԰�   ��J2�P�����L�Ԥh�԰�   ��J0��^\n";
		return 1;
	}

}
string Choose(int ck,int map)
{
	if (map == 0)
	{
		if (ck == 1)
		{
			return "���೾";
		}
		else if (ck == 2)
		{
			return "�p�۩�";
		}
		else
		{
			return "Wrong";
		}
	}
	else if (map == 2)
	{
		if (ck == 1)
		{
			return "�����L�p��";
		}
		else if (ck == 2)
		{
			return "�����L�Ԥh";
		}
		else
		{
			return "Wrong";
		}
	}
}
string where(int MapNumber)
{
	if (MapNumber == 0)
	{
		MapData.MapName = "���I�o���a(LV1~3)";
		return MapData.MapName;
	}
	else if (MapNumber == 1)
	{
		MapData.MapName = "���";
		return MapData.MapName;
	}
	else if (MapNumber == 2)
	{
		MapData.MapName = "���I�p�|(LV3~6)";
		return MapData.MapName;
	}
	else
	{
		return "none";
	}
}
int npc(int map)
{
	if (map == 0)
	{
		return 0;
	}
	else if (map == 1)
	{
		return 1;
	}
}
