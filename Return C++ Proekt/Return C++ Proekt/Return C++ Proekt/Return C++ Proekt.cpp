#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <conio.h>
#include <windows.h>

using namespace std;

enum KEYBOARD_KEYS {
	up = 72,
	down = 80,
	esc = 27,
	enter = 13,
};

struct Student {

	int age;
	char firstName[40];
	char Surname[40];

};

void Greetings() {

	cout << "Hello Director" << endl;
	cout << endl;
}


char PrintMenu(char menuList[5][20], int menuLength, int cursor){

	for (int i = 0; i < menuLength; i++) {

		if (cursor == i) {
			cout << (char)16 << " " << menuList[i] << endl;
		}
		else {
			cout << " " << menuList[i] << endl;
		}
	}
	return 0;
}

Student* DeleteStudent(Student oldStudents[], int& size)
{

	system("cls");
	if (size == 0)
	{
		cout << "Database is empty ";

		system("pause");
		return oldStudents;
	}
	else
	{
		cout << "Choose student" << endl;
		for (int i = 1; i < size; i++)
		{
			cout << i << "." << oldStudents[i].firstName << " " << oldStudents[i].Surname << endl;
		}

		cout << "Choose: ";

		int index;
		cin >> index;

		if (index < 1 || index > size)
		{
			system("cls");

			cout << "Student not exists! " << endl;

			system("pause");
			return oldStudents;
		}
		else
		{
			Student* newStudents = new Student[size - 1];
			index--;
			bool IsShift = true;
			for (int i = 0; i < size - 1; i++)
			{
				if (IsShift)
				{
					if (i == index)
					{
						newStudents[i].age = oldStudents[i + 1].age;
						strcpy_s(newStudents[i].firstName, oldStudents[i + 1].firstName);
						strcpy_s(newStudents[i].Surname, oldStudents[i + 1].Surname);
						IsShift = false;
					}
					else
					{
						newStudents[i].age = oldStudents[i].age;
						strcpy_s(newStudents[i].firstName, oldStudents[i].firstName);
						strcpy_s(newStudents[i].Surname, oldStudents[i].Surname);
					}
				}
				else
				{
					newStudents[i].age = oldStudents[i + 1].age;
					strcpy_s(newStudents[i].firstName, oldStudents[i + 1].firstName);
					strcpy_s(newStudents[i].Surname, oldStudents[i + 1].Surname);
				}
			}
			delete[] oldStudents;
			size--;
			return newStudents;
		}
	}
}


Student* AddStudent(Student oldStudents[], int& size)
{
	system("cls");
	Student* newStudents = new Student[size + 1];
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			newStudents[i].age = oldStudents[i].age;
			strcpy_s(newStudents[i].firstName, oldStudents[i].firstName);
			strcpy_s(newStudents[i].Surname, oldStudents[i].Surname);
		}
	}
	cout << "Add Student" << endl;
	cout << "Name: ";
	gets_s(newStudents[size].firstName, 40);
	cout << "Surname: ";
	gets_s(newStudents[size].Surname, 40);
	cout << "Age: ";
	cin >> newStudents[size].age;
	cin.ignore();
	delete[] oldStudents;
	size++;
	return newStudents;
}


void AllStudents(Student students[], int size)
{
	
	system("cls");
	if (size == 0)
	{
		cout << "No Information!" << endl;
	}

	else
	{
		for (int i = 1; i < size; i++)
		{
			cout << "Student N" << i << endl;
			cout << endl;
			cout << "Name: " << students[i].firstName << endl;
			cout << "Surname: " << students[i].Surname << endl;
			cout << "Age: " << students[i].age << endl;
			cout << endl;
		}
	}
	system("pause");
}


int main() {

	int size = 0;
	Student* students = new Student[size];

	const int menuLength = 4;

	int cursor = 1;

	char menuList[menuLength][20] = {
		"Add Student",
		"Delete Student",
		"All Students",
		"Exit"
	};

	while (true) {

		system("cls");
		Greetings();
		cout << PrintMenu(menuList, menuLength, cursor);

		int key = _getch();

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
			students = AddStudent(students, size);
		}
		if (key == enter && cursor == 1) {
			system("cls");
			students = DeleteStudent(students, size);
		}
		if (key == enter && cursor == 2) {
			system("cls");
			AllStudents(students, size);
		}
		if (key == enter && cursor == 3) {
			system("cls");
			cout << "Good Bye!" << endl;
			break;
		}
	}
}