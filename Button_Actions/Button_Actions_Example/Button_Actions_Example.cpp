#include <iostream>

#include <windows.h>
#include <conio.h>

void setcur(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

enum class KEYS_2
{
	ESC = 27,
	W = 87,
	w = 119,
	S = 83,
	s = 115,
	A = 65,
	a = 97,
	D = 68,
	d = 100
};

int Number = 5;

int Letter = 5;

void arrPrint(char(&arr)[10][10])
{
	std::cout << std::endl << std::endl << "              |---------------------|" << std::endl;
	for (int start = 0; start < 10; start++)
	{
		std::cout << "              |" << arr[start][0] << "|" << arr[start][1] << "|" << arr[start][2] << "|" << arr[start][3] << "|" << arr[start][4] << "|" << arr[start][5] << "|" << arr[start][6] << "|" << arr[start][7] << "|" << arr[start][8] << "|" << arr[start][9] << "| |" << std::endl;
	}
	std::cout << "              |---------------------|" << std::endl;
	std::cout << "              |          W          |" << std::endl;
	std::cout << "              |        A S D        |" << std::endl;
	std::cout << "              |---------------------|" << std::endl;
	std::cout << "                         ";
}

void Move(char(&arr)[10][10])
{
	while (true)
	{
		if (_kbhit())
		{
			switch (static_cast<KEYS_2>(_getch()))
			{
			case KEYS_2::W:
				arr[Letter][Number] = ' ';
				arr[Letter - 1][Number] = '#';
				Letter--;
				setcur(0, 0);
				arrPrint(arr);
				break;

			case KEYS_2::w:
				arr[Letter][Number] = ' ';
				arr[Letter - 1][Number] = '#';
				Letter--;
				setcur(0, 0);
				arrPrint(arr);
				break;

			case KEYS_2::S:
				arr[Letter][Number] = ' ';
				arr[Letter + 1][Number] = '#';
				Letter++;
				setcur(0, 0);
				arrPrint(arr);
				break;

			case KEYS_2::s:
				arr[Letter][Number] = ' ';
				arr[Letter + 1][Number] = '#';
				Letter++;
				setcur(0, 0);
				arrPrint(arr);
				break;

			case KEYS_2::A:
				arr[Letter][Number] = ' ';
				arr[Letter][Number - 1] = '#';
				Number--;
				setcur(0, 0);
				arrPrint(arr);
				break;

			case KEYS_2::a:
				arr[Letter][Number] = ' ';
				arr[Letter][Number - 1] = '#';
				Number--;
				setcur(0, 0);
				arrPrint(arr);
				break;

			case KEYS_2::D:
				arr[Letter][Number] = ' ';
				arr[Letter][Number + 1] = '#';
				Number++;
				setcur(0, 0);
				arrPrint(arr);
				break;

			case KEYS_2::d:
				arr[Letter][Number] = ' ';
				arr[Letter][Number + 1] = '#';
				Number++;
				setcur(0, 0);
				arrPrint(arr);
				break;
			}
		}
	}
}

int main()
{
	char arr[10][10] = { 0 };

	arrPrint(arr);

	while (true)
	{
		Move(arr);
	}
}
