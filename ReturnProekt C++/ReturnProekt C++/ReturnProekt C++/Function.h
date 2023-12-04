#pragma once

#include "Enums.h"
#include "Structures.h"

using namespace std;



void PrintMenu(char** menu, int menuLength, int cursor) {
	// get console reference
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 0; i < menuLength; i++)
	{
		if (cursor == i) {
			SetConsoleTextAttribute(console, 0x70);
			//system("color 70");
			cout << (char)16 << " " << menu[i] << endl;
			//system("color 07");
			SetConsoleTextAttribute(console, 0x07);
		}
		else {
			cout << "  " << menu[i] << endl;
		}
	}
}

void Registration(char* name[], char* surname[], unsigned int* age) {
	cout << "Hello, User!" << "\n" << "Please, pass registration." << endl;
	cout << "Enter your name: ", cin >> *name; //registration by references
	cout << "Enter your surname: ", cin >> *surname;
	cout << "Enter your age: ", cin >> *age;
}

void Edit(char* name[], char* surname[], unsigned int* age) {
	const int menuLength = 4;

	int cursor = 0;
	char** editMenu = new char* [menuLength] {
		(char*)"NAME",
			(char*)"SURNAME",
			(char*)"AGE",
			(char*)"BACK"
	};

	while (true) {
		system("cls");
		PrintMenu(editMenu, menuLength, cursor);

		cout << " " << endl;

		cout << char(24) << "\t" << "UP" << endl; //instructions for menu
		cout << char(25) << "\t" << "DOWN" << endl;
		cout << "space" << "\t" << "ENTER" << endl;
		cout << "esc" << "\t" << "ESCAPE" << endl;

		int key = _getch();

		if (key == esc) {
			system("cls");
			cout << "See you later, Mr/Mrs " << *name << " " << *surname << "!" << endl;
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
			cout << "Enter your name: ", cin >> *name; //for change name by reference
		}
		if (key == enter && cursor == 1) {
			system("cls");
			cout << "Enter your surname: ", cin >> *surname; //for change surname by reference
		}
		if (key == enter && cursor == 2) {
			system("cls");
			cout << "Enter your age: ", cin >> *age; //for change age by reference
		}
		if (key == enter && cursor == 3) { //backspace
			system("cls");
			break;
		}
	}
}


int* AddMoney(int* pocket) { //returns reference for balance
	cout << "Your balance now is: " << *pocket << endl;
	int inputMoney = 0; //variable for change in amount by input
	cout << "Please enter amount: ", cin >> inputMoney;
	*pocket += inputMoney; //change formula
	return pocket;
}

int* SpendMoney(int* pocket) { //returns reference for balance
	cout << "Your balance now is: " << *pocket << endl;
	int inputMoney = 0; //variable for change in amount
	cout << "Please enter amount: ", cin >> inputMoney;
	*pocket -= inputMoney; //change formula
	return pocket;
}

void Info(char* name[], char* surname[], unsigned int* age, int* amount) {
	cout << "User name: " << *name << endl; //for viewing name
	cout << "User surname: " << *surname << endl; //for viewing surname
	cout << "User age: " << *age << endl; //for viewing age
	cout << "User balance: " << *amount << endl; //for viewing balance
	system("pause"); //pause for view
}
