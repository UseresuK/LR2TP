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
	cout << "Введите x: " << endl;
	cin >> input1;
	cout << "Введите y: " << endl;
	cin >> y;
	cout << "Введите z: " << endl;
	cin >> z;

	double_v input(input1);
	double_v input2(y);
	double_v input3(z);
	system("cls");

	while (flag == 1)
	{
		cout << "Выберите, какие операции провести с координатами:" << endl;
		cout << "1 - Оператор ! для умножения всех данных на (-1)" << endl;
		cout << "2 - Префиксный оператор -- для уменьшения всех полей данных на наибольшее значение среди них" << endl;
		cout << "3 - Постфиксный оператор -- для уменьшения одного поля данных на выбор пользователя на пользовательское число" << endl;
		cout << "4 - Постфиксный оператор ++ для увеличения одного поля данных на выбор пользователя на пользовательское число" << endl;
		cout << "5 - Префиксный оператор ++ для увеличения всех полей данных на наименьшее значение среди них" << endl;
		cout << "6 - Вывести координаты" << endl;
		cout << "7 - Переход ко второму заданию" << endl;
		cout << "--> ";
		c = -1;
		while (c < 1 || c >7)
		{
			cin >> c;
			if (c < 0 || c>7)
				cout << "Ошибка ввода!" << endl;
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
			cout << "Выберите координату, которую необходимо уменьшить (x, y, z)" << endl;
			d = 'd';
			while (d != 'x' && d != 'y' && d != 'z')
			{
				cin >> d;
				if (d != 'x' && d != 'y' && d != 'z')
					cout << "Ошибка ввода! Введите координату заново (x, y, z)." << endl;
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
			cout << "Выберите координату, которую необходимо увеличить (x, y, z)." << endl;
			b = 'b';
			while (b != 'x' && b != 'y' && b != 'z')
			{
				cin >> b;
				if (b != 'x' && b != 'y' && b != 'z')
					cout << "Ошибка ввода! Введите координату заново (x, y, z)." << endl;
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
			cout << "Координаты " << input << "  " << input2 << "  " << input3 << endl;
			break;
		case 7: //0 - Выход
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
	cout << "Размер стека равен ";
	size = rand() % 10 + 1;
	cout << size << endl;
	try
	{
		if (cin.fail()) throw "Введённые символы не являются числом!";
		Stack x(size);
		system("pause");
		system("cls");
		while (exit)
		{
			cout << "1) /, -, =\n" << "2) /=, -=, ! \n" << "3) <, >, == \n" << "4) Ввод и ввывод в поток\n" << "5)Выход из программы \n" << "\nВыберите действие : \n";
			choose = _getch();
			switch (choose)
			{
			case '1':
				cout << "1) / \n" << "2) - \n" << "3) = \n";
				choose = _getch();
				switch (choose)
				{
				case '1':
					cout << "/\n" << "Стек x:\n" << x << endl;
					try
					{
						cout << "Введите число, на которое хотите делить: ";
						cin >> value;
						cin.ignore(32767, '\n');
						if (cin.fail())
							throw "Введенные символы не	являются числом";
						x / value;
						cout << "Результат деления:\n" << x << endl;
					}
					catch (const char* exc)
					{
						cout << exc << endl;
						cin.clear();
						cin.ignore(32767, '\n');
					}
					break;
				case '2':
					cout << "-\n" << "Стек x:\n" << x << endl;
					try
					{
						cout << "Введите число, которое хотите отнять:";
						cin >> value;
						cin.ignore(32767, '\n');
						if (cin.fail())
							throw "Введенные символы не	являются числом";
						x - value;
						cout << "Результат вычитания:\n" << x << endl;
					}
					catch (const char* exc)
					{
						cout << exc << endl;
						cin.clear();
						cin.ignore(32767, '\n');
					}
					break;
				case '3':
					cout << "=\n" << "Стек x:\n" << x << endl;
					try
					{
						cout << "Введите число, к которому хотите приравнять все элементы стека : ";
						cin >> value;
						cin.ignore(32767, '\n');
						if (cin.fail())
							throw "Введенные символы не	являются числом";
						x = value;
						cout << "Результат приравнивания:\n" << x << endl;
					}
					catch (const char* exc)
					{
						cout << exc << endl;
						cin.clear();
						cin.ignore(32767, '\n');
					}
					break;
				default:
					cout << "\nОшибка при выборе категории!" << endl;
					break;
				}
				break;
			case '2':
				cout << "1) /= \n" << "2) -= \n" << "3) ! \n";
				choose = _getch();
				switch (choose)
				{
				case '1':
					cout << "/=\n" << "Стек x:\n" << x << endl;
					try
					{
						cout << "Введите число, на которое хотите разделить все элементы стека : ";

						cin >> value;
						cin.ignore(32767, '\n');
						if (cin.fail())
							throw "Введенные символы не	являются числом";
						x /= value;
						cout << "Результат деления:\n" << x << endl;
					}
					catch (const char* exc)
					{
						cout << exc << endl;
						cin.clear();
						cin.ignore(32767, '\n');
					}
					break;
				case '2':
					cout << "-=\n" << "Стек x:\n" << x << endl;
					try
					{
						cout << "Введите число, на которое хотите уменьшить все элементы стека : ";
						cin >> value;
						cin.ignore(32767, '\n');
						if (cin.fail())
							throw "Введенные символы не	являются числом";
						x -= value;
						cout << "Результат деления:\n" << x << endl;
					}
					catch (const char* exc)
					{
						cout << exc << endl;
						cin.clear();
						cin.ignore(32767, '\n');
					}
					break;
				case '3':
					cout << "!\n" << "Стек x:\n" << x << endl;
					try
					{
						!x;
						cout << "Результат умножения на (-1):\n" << x
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
					cout << "\nОшибка при выборе категории!" << endl;
					break;
				}
				break;
			case '3':
				cout << "Сравнение\n" << "Стек x:\n" << x << endl;
				try
				{
					cout << "Введите число, с которым хотите сравнить все элементы стека : ";
					cin >> value;
					cin.ignore(32767, '\n');
					if (cin.fail())
						throw "Введенные символы не являются числом";
					cout << "Результат сравнения: \n";
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
				cout << "1) Ввод \n" << "2) Вывод \n";
				choose = _getch();
				switch (choose)
				{
				case '1':
					cout << "Ввод\n" << "Стек x:\n" << x << endl;
					try
					{
						cout << "Введите число: ";
						cin >> x;
						cin.ignore(32767, '\n');
						if (cin.fail())
							throw "Введенные символы не	являются числом";
						cout << "Результат ввода:\n" << x << endl;
					}
					catch (const char* exc)
					{
						cout << exc << endl;
						cin.clear();
						cin.ignore(32767, '\n');
					}
					break;
				case '2':
					cout << "Показать стек\n" << "Стек s:\n" << x << endl;
					break;
				default:
					cin.ignore(32767, '\n');
					break;
				}
				break;
			case'5':
				cout << "Выход\n";
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