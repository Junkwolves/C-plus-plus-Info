#include "pch.h"

#include <windows.h>
#include <iostream>

int main()
{
	std::cout << std::endl << std::endl;
	std::cout << "  |----------------------------------|  " << std::endl;
	std::cout << "  |";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	std::cout << "----------------------------------";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	std::cout << "| " << std::endl;
	std::cout << "  |";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	std::cout << "----------------------------------";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	std::cout << "| " << std::endl;
	std::cout << "  |";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	std::cout << "----------------------------------";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	std::cout << "| " << std::endl;
	std::cout << "  |";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	std::cout << "----------------------------------";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	std::cout << "| " << std::endl;
	std::cout << "  |";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	std::cout << "----------------------------------";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	std::cout << "| " << std::endl;
	std::cout << "  |";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	std::cout << "----------------------------------";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	std::cout << "| " << std::endl;
	std::cout << "  |";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	std::cout << "----------------------------------";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	std::cout << "| " << std::endl;
	std::cout << "  |";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	std::cout << "----------------------------------";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	std::cout << "| " << std::endl;
	std::cout << "  |";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	std::cout << "----------------------------------";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	std::cout << "| " << std::endl;
	std::cout << "  |----------------------------------|  " << std::endl;

	int stop; std::cin >> stop;

	return 0;
}