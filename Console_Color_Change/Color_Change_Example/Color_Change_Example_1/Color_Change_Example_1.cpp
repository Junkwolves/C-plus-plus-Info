#include <windows.h>
#include <iostream>

int main()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
	std::cout << "Hello World!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	std::cout << "Hello World!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	std::cout << "Hello World!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	std::cout << "Hello World!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	std::cout << "Hello World!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	std::cout << "Hello World!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	std::cout << "Hello World!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	std::cout << "Hello World!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	std::cout << "Hello World!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	std::cout << "Hello World!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	std::cout << "Hello World!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	std::cout << "Hello World!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	std::cout << "Hello World!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	std::cout << "Hello World!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	std::cout << "Hello World!\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	std::cout << "Hello World!\n";

	int stop; std::cin >> stop;

	return 0;
}