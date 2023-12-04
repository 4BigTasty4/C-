#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <conio.h>
#include <windows.h>

#include "Function.h"

using namespace std;

int main() {
	const int menuLength = 5;

	int cursor = 0;
	int balance = 0;

	char registrationName[20] = "Name";
	char registrationSurname[20] = "Surname";
	unsigned int registrationAge = 0;

	char* registrationNamePtr = registrationName;
	char* registrationSurnamePtr = registrationSurname;

	Registration(&registrationNamePtr, &registrationSurnamePtr, &registrationAge);

	char** menu = new char* [menuLength] {
		(char*)"EDIT",
			(char*)"ADD MONEY",
			(char*)"SPEND MONEY",
			(char*)"INFO",
			(char*)"EXIT"
	};

	while (true) {
		system("cls");
		cout << "Welcome Mr./Mrs " << registrationName << " " << registrationSurname << "!" << endl;

		cout << " " << endl;

		PrintMenu(menu, menuLength, cursor);

		cout << " " << endl;

		cout << char(24) << "\t" << "UP" << endl; // instructions for menu
		cout << char(25) << "\t" << "DOWN" << endl;
		cout << "space" << "\t" << "ENTER" << endl;
		cout << "esc" << "\t" << "ESCAPE" << endl;

		int key = _getch();

		if (key == esc) {
			system("cls");
			cout << "See you later, Mr/Mrs " << registrationName << " " << registrationSurname << "!" << endl;
			break;
		}
		if (key == down) {
			if (cursor == menuLength - 1)
				cursor = 0;
			else
				cursor++;
		}
		else if (key == up) {
			if (cursor == 0)
				cursor = menuLength - 1;
			else
				cursor--;
		}
		if (key == enter && cursor == 0) {
			system("cls");
			Edit(&registrationNamePtr, &registrationSurnamePtr, &registrationAge);
		}
		if (key == enter && cursor == 1) {
			system("cls");
			AddMoney(&balance);
		}
		if (key == enter && cursor == 2) {
			system("cls");
			SpendMoney(&balance);
		}
		if (key == enter && cursor == 3) {
			system("cls");
			Info(&registrationNamePtr, &registrationSurnamePtr, &registrationAge, &balance);
		}
		if (key == enter && cursor == 4) {
			system("cls");
			cout << "See you later, Mr/Mrs " << registrationName << " " << registrationSurname << "!" << endl;
			break;
		}
	}
}