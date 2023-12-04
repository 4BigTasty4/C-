#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <conio.h>
#include <iostream>
#include <windows.h>

using namespace std;

// —труктура, где хран€тс€ данные студента.
struct Student {
	int age;
	int grade;
	char firstName[40];
	char Surname[40];
};

void Menu(char options[5][30], int length, int cursor)
{
	system("cls");
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 0; i < length; i++)
	{
		if (cursor == i) {
			SetConsoleTextAttribute(console, 0x70);
			cout << (char)16 << " " << options[i] << endl;
			SetConsoleTextAttribute(console, 0x07);
		}
		else cout << "  " << options[i] << endl;
	}
}


void AllStudents(Student students[], int size)
{
	// ≈сли в базе нет студентов.
	system("cls");
	if (size == 0)
	{

		cout << "\n\t Database is empty";

	}


	//≈сли в базе есть студенты, то при помощи цикла выводим их данные.
	else
	{
		for (int i = 0; i < size; i++)
		{
			cout << "\t Student N" << i + 1 << "*" << endl;
			cout << " First Name: " << students[i].firstName << endl;
			cout << "Surname: " << students[i].Surname << endl;
			cout << "Age: " << students[i].age << endl;
			if (students[i].grade < 0) cout << "Grade: none" << endl;
			else cout << "Grade: " << students[i].grade << endl;
		}
	}
	system("pause");
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
			newStudents[i].grade = oldStudents[i].grade;
			strcpy_s(newStudents[i].firstName, oldStudents[i].firstName);
			strcpy_s(newStudents[i].Surname, oldStudents[i].Surname);
		}
	}
	cout << "\t Add student" << endl;
	cout << "\Enter first name: ";
	gets_s(newStudents[size].firstName, 40);
	cout << "Enter Surname: ";
	gets_s(newStudents[size].Surname, 40);
	cout << "Enter age: ";
	cin >> newStudents[size].age;
	cin.ignore();
	delete[] oldStudents;
	size++;
	return newStudents;
}

Student* DeleteStudent(Student oldStudents[], int& size)
{

	// ≈сли размер равен нулю, значит нет данных.
	system("cls");
	if (size == 0)
	{

		cout << "\n\t Database is empty ";

		system("pause");
		return oldStudents;
	}
	else
	{
		cout << "\tChoose student" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << i + 1 << ")" << oldStudents[i].firstName << " " << oldStudents[i].Surname << endl;
		}

		cout << "Choose: ";

		int index;
		cin >> index;

		if (index < 1 || index > size)
		{
			system("cls");

			cout << "\t Student not exists! " << endl;

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
						newStudents[i].grade = oldStudents[i + 1].grade;
						strcpy_s(newStudents[i].firstName, oldStudents[i + 1].firstName);
						strcpy_s(newStudents[i].Surname, oldStudents[i + 1].Surname);
						IsShift = false;
					}
					else
					{
						newStudents[i].age = oldStudents[i].age;
						newStudents[i].grade = oldStudents[i].grade;
						strcpy_s(newStudents[i].firstName, oldStudents[i].firstName);
						strcpy_s(newStudents[i].Surname, oldStudents[i].Surname);
					}
				}
				else
				{
					newStudents[i].age = oldStudents[i + 1].age;
					newStudents[i].grade = oldStudents[i + 1].grade;
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

Student* ChangeStudentsGrade(Student students[], int& size) {
	system("cls");
	if (size == 0)
	{

		cout << " Database is empty " << endl;

		system("pause");
	}
	else
	{
		cout << "\tChoose student" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << i + 1 << ")" << students[i].firstName << " " << students[i].Surname << endl;
		}

		cout << "\nChoose: ";

		int index;
		cin >> index;

		if (index < 1 || index > size)
		{
			system("cls");

			cout << "\n\t Student not exists! ";

			system("pause");
		}
		else
		{
			cout << "\nEnter student's new grade: ";
			int grade;
			cin >> grade;

			if (grade >= 0 && grade <= 12) students[index - 1].grade = grade;
			else {
				system("cls");

				cout << "\t Wrong grade format ";

				system("pause");
			}
		}
		return students;
	}
}



void main() {

	//  онтроллеры приложени€.
	const int length = 5;
	const int up = 72;
	const int down = 80;
	const int esc = 27;
	const int enter = 13;

	int cursor = 0;
	char menu[length][30] = {
		"Add Student",
		"Delete Student",
		"All Students",
		"Change Student's grade",
		"Exit"
	};

	int size = 0;
	Student* students = new Student[size];



	// ÷икл останавливаетс€ при выходе из приложени€.
	while (true)
	{
		Menu(menu, length, cursor);

		// —читывание нажати€ клавиш.
		int key = _getch();

		// ѕри выходе мы из	приложени€ сначало удал€ем дин.массив.
		if (key == esc)
		{
			system("cls");
			delete[] students;
			exit(1);
		}
		else if (key == enter)
		{
			switch (cursor)
			{
			case 0:
			{
				students = AddStudent(students, size);
				break;
			}
			case 1:
			{
				students = DeleteStudent(students, size);
				break;
			}
			case 2:
			{
				AllStudents(students, size);
				break;
			}
			case 3:
			{
				students = ChangeStudentsGrade(students, size);
				break;
			}
			case 4: {
				system("cls");
				exit(1);
				delete[] students;
			}
			default: break;
			}
		}
		else if (key == up)
		{
			if (cursor == 0) cursor = length - 1;
			else cursor--;
		}
		else if (key == down)
		{
			if (cursor == length - 1) cursor = 0;
			else cursor++;
		}
	}
}