#include<iostream>
#include<string>
#include<time.h>
using namespace std;
int p;
int HisHP(string Monster)
{
	if (Monster == "�p�۩�")
	{
		return 135;
	}
	else if (Monster == "���೾")
	{
		return 90;
	}
	else if (Monster == "�����L�p��")
	{
		return 140;
	}
	else if (Monster == "�����L�Ԥh")
	{
		return 177;
	}
}
int HisDamage(string Monster)
{
	if (Monster == "�p�۩�")
	{
		return 12;
	}
	else if (Monster == "���೾")
	{
		return 9;
	}
	else if (Monster == "�����L�p��")
	{
		return 15;
	}
	else if (Monster == "�����L�Ԥh")
	{
		return 18;
	}
}
int HisEXP(string Monster)
{
	if (Monster == "�p�۩�")
	{
		return 35;
	}
	else if (Monster == "���೾")
	{
		return 30;
	}
	else if (Monster == "�����L�p��")
	{
		return 35;
	}
	else if (Monster == "�����L�Ԥh")
	{
		return 40;
	}
}
int HisSkill(string Monster)
{
	srand(time(NULL));
	p = ((rand() * rand()) % 1648) % 100;
	if (Monster == "�p�۩�")
	{
		return 0;
	}
	else if (Monster == "���೾")
	{
		if (p >= 20)
		{
			return 0;
		}
		else if (p < 20)
		{
			return 1;
		}
	}
	else if (Monster == "�����L�p��")
	{
		return 0;
	}
	else if (Monster == "�����L�Ԥh")
	{
		if (p >= 20)
		{
			return 0;
		}
		else if (p < 20)
		{
			return 1;
		}
	}
}
int LV(string MonsterName)
{
	if (MonsterName == "���೾")
	{
		return 1;
	}
	else if (MonsterName == "�p�۩�")
	{
		return 2;
	}
	else if (MonsterName == "�����L�p��")
	{
		return 3;
	}
	else if (MonsterName == "�����L�Ԥh")
	{
		return 4;
	}
}
float GetSkillDamage(string HisSkillName)
{
	if (HisSkillName == "�G�s��")
	{
		return 2;
	}
	if (HisSkillName == "����")
	{
		return 1.5;
	}
}
int SpecialEffect(string Monster)
{
	srand(time(NULL));
	p = ((rand() * rand()) % 1608) % 100;
	//if (Monster == "���೾")
	//{
	//	if (p < 10)
	//	{
	//		return 601;
	//	}
	//	else
	//	{
	//		return 0;
	//	}
	//}
}
string HisSkillName(string Monster)
{
	if (Monster == "�p�۩�")
	{
		return "none";
	}
	else if (Monster == "���೾")
	{
		return "�G�s��";
	}
	else if (Monster == "�����L�p��")
	{
		return "none";
	}
	else if (Monster == "�����L�Ԥh")
	{
		return "����";
	}
}
string GetPrize(string MonsterName)
{
	int p;
	if (MonsterName == "���೾")
	{
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (p >= 20)
		{
			cout << "�A��o�F�Ф�";
			return "�Ф�";
		}
		else
		{
			return "none";
		}
	}
	else if (MonsterName == "�p�۩�")
	{
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (p >= 20)
		{
			cout << "�A��o�F�H��";
			return "�H��";
		}
		else
		{
			return "none";
		}
	}
	else if (MonsterName == "�����L�p��")
	{
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (p >= 20)
		{
			cout << "�A��o�F�����L����";
			return "�����L����";
		}
		else
		{
			return "none";
		}
	}
	else if (MonsterName == "�����L�Ԥh")
	{
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (p >= 20)
		{
			cout << "�A��o�F�����L����";
			return "�����L����";
		}
		else
		{
			return "none";
		}
	}
}
int GetCount(string MonsterName)
{
	int p;
	if (MonsterName == "���೾")
	{
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (p >= 50)
		{
			cout << "x2!\n\n";
			return 2;
		}
		else
		{
			cout << "!" << endl << endl;
			return 1;
		}
	}
	else if (MonsterName == "�p�۩�")
	{
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (p >= 50)
		{
			cout << "x2!\n\n";
			return 2;
		}
		else
		{
			cout << "!\n\n";
			return 1;
		}
	}
	else if (MonsterName == "�����L�p��")
	{
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (p >= 50)
		{
			cout << "x2!\n\n";
			return 2;
		}
		else
		{
			cout << "!\n\n";
			return 1;
		}
	}
	else if (MonsterName == "�����L�Ԥh")
	{
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (p >= 50)
		{
			cout << "x2!\n\n";
			return 2;
		}
		else
		{
			cout << "!\n\n";
			return 1;
		}
	}
}

