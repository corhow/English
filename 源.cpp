#include<iostream>
#include<string>
#include<ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	double f = 0, t = 0, c; int n = 0;
	string word1, answer1; string word2, answer2; string word3, answer3;
	string word4, answer4;	string word5, answer5; string word6, answer6;
	string word7, answer7; string word8, answer8; string word9, answer9;
	string word10, answer10; string word11, answer11; string word12, answer12;
	string word13, answer13; string word14, answer14; string word15, answer15;
	string word16, answer16; string word17, answer17; string word18, answer18;
	for (int i = 0; i <= 17; i++)
	{
		int m;
		m = rand() % 17 + 1;
		switch ((m))
		{
		case 1:
			word1 = "tedious";
			cout << "�߳���ζ��" << "\t";
			cin >> answer1;
			if (answer1 != word1)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 2:
			word2 = "oblige";
			cout << "��ʹ��ʹ�������" << "\t";
			cin >> answer2;
			if (answer2 != word2)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 3:
			word3 = "absorbed";
			cout << "רע�ģ�������Ȥ��\n��������" << "\t";
			cin >> answer3;
			if (answer3 != word3)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 4:
			word4 = "excursion";
			cout << "��;���У�Զ��" << "\t";
			cin >> answer4;
			if (answer4 != word4)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 5:
			word5 = "earnest";
			cout << "�ǳ������" << "\t";
			cin >> answer5;
			if (answer5 != word5)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 6:
			word6 = "exclaim";
			cout << "����������" << "\t";
			cin >> answer6;
			if (answer6 != word6)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 7:
			word7 = "whoa";
			cout << "��ѽ����" << "\t";
			cin >> answer7;
			if (answer7 != word7)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 8:
			word8 = "civilization";
			cout << "����" << "\t";
			cin >> answer8;
			if (answer8 != word8)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 9:
			word9 = "architecture";
			cout << "�������\n����ѧ" << "\t";
			cin >> answer9;
			if (answer9 != word9)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 10:
			word10 = "capture";
			cout << "��¼\n��²" << "\t";
			cin >> answer10;
			if (answer10 != word10)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 11:
			word11 = "allergic";
			cout << "��ϲ����\n������" << "\t";
			cin >> answer11;
			if (answer11 != word11)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 12:
			word12 = "condense";
			cout << "�������»��ļ���ѹ��" << "\t";
			cin >> answer12;
			if (answer12 != word12)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 13:
			word13 = "exceed";
			cout << "����������" << "\t";
			cin >> answer13;
			if (answer13 != word13)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 14:
			word14 = "distress";
			cout << "���ǣ����գ�����" << "\t";
			cin >> answer14;
			if (answer14 != word14)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 15:
			word15 = "distinguish";
			cout << "���𣬱��" << "\t";
			cin >> answer15;
			if (answer15 != word15)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 16:
			word16 = "distinctive";
			cout << "����ģ��ر��" << "\t";
			cin >> answer16;
			if (answer16 != word16)
			{
				cout << "This is a wrong answer!\n" << word16;
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 17:
			word17 = "complimentary";
			cout << "������͵�\n�����ģ������" << "\t";
			cin >> answer17;
			if (answer17 != word17)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		case 18:
			word18 = "complementary";
			cout << "������" << "\t";
			cin >> answer18;
			if (answer18 != word18)
			{
				cout << "This is a wrong answer!\n";
				f += 1; n = 1; break;
			}
			else
				t += 1; n = 1; break;
		}
	}
	c = (t / (t + f)) * 100;
	cout << "\nNow you have completed all the words\nTurn=" << t << "\tfalse=" << f << "\n You have " << c << " percent accurate" << endl;
	system("pause");
}
