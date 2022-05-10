#include <iostream>
#include <ctime>
#include <locale>
#include "double_v.h"
#include "Stack.h"
#include <conio.h>

using namespace std;
extern double mn = 111111;
extern double mx = -222222;
char choose;

int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int flag = 1, c;
	char b, d;
	double y, z, input1;
	cout << "������� x: " << endl;
	cin >> input1;
	cout << "������� y: " << endl;
	cin >> y;
	cout << "������� z: " << endl;
	cin >> z;

	double_v input(input1);
	double_v input2(y);
	double_v input3(z);
	system("cls");

	while (flag == 1)
	{
		cout << "��������, ����� �������� �������� � ������������:" << endl;
		cout << "1 - �������� ! ��� ��������� ���� ������ �� (-1)" << endl;
		cout << "2 - ���������� �������� -- ��� ���������� ���� ����� ������ �� ���������� �������� ����� ���" << endl;
		cout << "3 - ����������� �������� -- ��� ���������� ������ ���� ������ �� ����� ������������ �� ���������������� �����" << endl;
		cout << "4 - ����������� �������� ++ ��� ���������� ������ ���� ������ �� ����� ������������ �� ���������������� �����" << endl;
		cout << "5 - ���������� �������� ++ ��� ���������� ���� ����� ������ �� ���������� �������� ����� ���" << endl;
		cout << "6 - ������� ����������" << endl;
		cout << "7 - ������� �� ������� �������" << endl;
		cout << "--> ";
		c = -1;
		while (c < 1 || c >7)
		{
			cin >> c;
			if (c < 0 || c>7)
				cout << "������ �����!" << endl;
		}
		switch (c)
		{
		case 1:
			system("cls");
			!input;
			!input2;
			!input3;
			break;
		case 2:
			system("cls");
			mx = -222222;
			-input;
			-input2;
			-input3;
			--input;
			--input2;
			--input3;
			break;
		case 3:
			cout << "�������� ����������, ������� ���������� ��������� (x, y, z)" << endl;
			d = 'd';
			while (d != 'x' && d != 'y' && d != 'z')
			{
				cin >> d;
				if (d != 'x' && d != 'y' && d != 'z')
					cout << "������ �����! ������� ���������� ������ (x, y, z)." << endl;
			}
			switch (d)
			{
			case 'x':
				system("cls");
				input--;
				break;
			case 'y':
				system("cls");
				input2--;
				break;
			case 'z':
				system("cls");
				input3--;
				break;
			}
			break;
		case 4:
			cout << "�������� ����������, ������� ���������� ��������� (x, y, z)." << endl;
			b = 'b';
			while (b != 'x' && b != 'y' && b != 'z')
			{
				cin >> b;
				if (b != 'x' && b != 'y' && b != 'z')
					cout << "������ �����! ������� ���������� ������ (x, y, z)." << endl;
			}
			switch (b)
			{
			case 'x':
				system("cls");
				input++;
				break;
			case 'y':
				system("cls");
				input2++;
				break;
			case 'z':
				system("cls");
				input3++;
				break;
			}
			break;
		case 5:
			system("cls");
			mn = 11111;
			+input;
			+input2;
			+input3;
			++input;
			++input2;
			++input3;
			break;
		case 6:
			system("cls");
			cout << "���������� " << input << "  " << input2 << "  " << input3 << endl;
			break;
		case 7: //0 - �����
			cout << "\n";
			flag = 0;
			break;
		default:
			cout << "\n";
			flag = 0;
			break;
		}
	}

	system("cls");
	int size = 0;
	int value;
	bool exit = 1;
	cout << "������ ����� ����� ";
	size = rand() % 10 + 1;
	cout << size << endl;
	try
	{
		if (cin.fail()) throw "�������� ������� �� �������� ������!";
		Stack x(size);
		system("pause");
		system("cls");
		while (exit)
		{
			cout << "1) /, -, =\n" << "2) /=, -=, ! \n" << "3) <, >, == \n" << "4) ���� � ������ � �����\n" << "5)����� �� ��������� \n" << "\n�������� �������� : \n";
			choose = _getch();
			switch (choose)
			{
			case '1':
				cout << "1) / \n" << "2) - \n" << "3) = \n";
				choose = _getch();
				switch (choose)
				{
				case '1':
					cout << "/\n" << "���� x:\n" << x << endl;
					try
					{
						cout << "������� �����, �� ������� ������ ������: ";
						cin >> value;
						cin.ignore(32767, '\n');
						if (cin.fail())
							throw "��������� ������� ��	�������� ������";
						x / value;
						cout << "��������� �������:\n" << x << endl;
					}
					catch (const char* exc)
					{
						cout << exc << endl;
						cin.clear();
						cin.ignore(32767, '\n');
					}
					break;
				case '2':
					cout << "-\n" << "���� x:\n" << x << endl;
					try
					{
						cout << "������� �����, ������� ������ ������:";
						cin >> value;
						cin.ignore(32767, '\n');
						if (cin.fail())
							throw "��������� ������� ��	�������� ������";
						x - value;
						cout << "��������� ���������:\n" << x << endl;
					}
					catch (const char* exc)
					{
						cout << exc << endl;
						cin.clear();
						cin.ignore(32767, '\n');
					}
					break;
				case '3':
					cout << "=\n" << "���� x:\n" << x << endl;
					try
					{
						cout << "������� �����, � �������� ������ ���������� ��� �������� ����� : ";
						cin >> value;
						cin.ignore(32767, '\n');
						if (cin.fail())
							throw "��������� ������� ��	�������� ������";
						x = value;
						cout << "��������� �������������:\n" << x << endl;
					}
					catch (const char* exc)
					{
						cout << exc << endl;
						cin.clear();
						cin.ignore(32767, '\n');
					}
					break;
				default:
					cout << "\n������ ��� ������ ���������!" << endl;
					break;
				}
				break;
			case '2':
				cout << "1) /= \n" << "2) -= \n" << "3) ! \n";
				choose = _getch();
				switch (choose)
				{
				case '1':
					cout << "/=\n" << "���� x:\n" << x << endl;
					try
					{
						cout << "������� �����, �� ������� ������ ��������� ��� �������� ����� : ";

						cin >> value;
						cin.ignore(32767, '\n');
						if (cin.fail())
							throw "��������� ������� ��	�������� ������";
						x /= value;
						cout << "��������� �������:\n" << x << endl;
					}
					catch (const char* exc)
					{
						cout << exc << endl;
						cin.clear();
						cin.ignore(32767, '\n');
					}
					break;
				case '2':
					cout << "-=\n" << "���� x:\n" << x << endl;
					try
					{
						cout << "������� �����, �� ������� ������ ��������� ��� �������� ����� : ";
						cin >> value;
						cin.ignore(32767, '\n');
						if (cin.fail())
							throw "��������� ������� ��	�������� ������";
						x -= value;
						cout << "��������� �������:\n" << x << endl;
					}
					catch (const char* exc)
					{
						cout << exc << endl;
						cin.clear();
						cin.ignore(32767, '\n');
					}
					break;
				case '3':
					cout << "!\n" << "���� x:\n" << x << endl;
					try
					{
						!x;
						cout << "��������� ��������� �� (-1):\n" << x
							<< endl;
					}
					catch (const char* exc)
					{
						cout << exc << endl;
						cin.clear();
						cin.ignore(32767, '\n');
					}
					break;
				default:
					cout << "\n������ ��� ������ ���������!" << endl;
					break;
				}
				break;
			case '3':
				cout << "���������\n" << "���� x:\n" << x << endl;
				try
				{
					cout << "������� �����, � ������� ������ �������� ��� �������� ����� : ";
					cin >> value;
					cin.ignore(32767, '\n');
					if (cin.fail())
						throw "��������� ������� �� �������� ������";
					cout << "��������� ���������: \n";
					x == value;
				}
				catch (const char* exc)
				{
					cout << exc << endl;
					cin.clear();
					cin.ignore(32767, '\n');
				}
				break;
			case '4':
				cout << "1) ���� \n" << "2) ����� \n";
				choose = _getch();
				switch (choose)
				{
				case '1':
					cout << "����\n" << "���� x:\n" << x << endl;
					try
					{
						cout << "������� �����: ";
						cin >> x;
						cin.ignore(32767, '\n');
						if (cin.fail())
							throw "��������� ������� ��	�������� ������";
						cout << "��������� �����:\n" << x << endl;
					}
					catch (const char* exc)
					{
						cout << exc << endl;
						cin.clear();
						cin.ignore(32767, '\n');
					}
					break;
				case '2':
					cout << "�������� ����\n" << "���� s:\n" << x << endl;
					break;
				default:
					cin.ignore(32767, '\n');
					break;
				}
				break;
			case'5':
				cout << "�����\n";
				exit = 0;
				break;
			}
			system("pause");
			system("cls");
		}		
	}
	catch (const char* exc)
		{
			cout << exc << endl;
			cin.ignore(32767, '\n');
			cin.clear();
		}
	//system("pause");
	//system("cls");
    return 0;
}