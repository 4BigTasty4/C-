#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

void ProgramMenu(char powerOff[3][30], int lenght, int cursor);

//void PrintMenu(char menu[6][20], int menulenght, int cursor);
//
//int main()
//{
//	if (false) {
//
//		system("dir");
//
//	}
//
//	if (true) {
//
//
//
//		const int menulenght = 5;
//		const int up = 72;
//		const int down = 80;
//
//		int cursor = 3;
//
//		char menu[menulenght][20] = {
//
//			"Home",
//			"About",
//			"Rating",
//			"Statistics",
//			"Exit"
//
//		};
//
//		while (true)
//		{
//			system("cls");
//			PrintMenu(menu, menulenght, cursor);
//
//			int key = _getch();
//
//			if (key == up)
//				if (cursor == 0)
//					cursor = menulenght - 1;
//				else
//					cursor--;
//			else if (key == down)
//				if (cursor == menulenght - 1)
//					cursor = 0;
//				else
//					cursor++;
//
//
//		}
//
//	}
//
//
//}
//
//void PrintMenu(char menu[6][20], int menulenght, int cursor) {
//
//	for (int i = 0; i < menulenght; i++)
//	{
//		cout << (cursor == i) << menu[i] << endl;
//	}

void Enter(char menu[3][30], int key, int cursor);

int main() {

	if (false) {
		while (true)
		{
			int num = _getch();

			cout << num << endl;
		}


	}

	int const lenght = 3;
	int const lenght2 = 3;
	int const enter = 13;
	int const up = 72;
	int const down = 80;

	int cursor = 0;

	char powerOff[lenght][30] = {

		"Start",
		"Restart",
		"Sutdown"

	};

	char menu[3][30] = {

			"Join Instagram",
			"Join Facebook",
			"Join Youtube"

	};

	while (true)
	{

		system("cls");
		ProgramMenu(powerOff, lenght, cursor);

		int key = _getch();

		if (key == up)
			if (cursor == 0)
				cursor = lenght - 1;
			else
				cursor--;
		if (key == down)
			if (cursor == lenght - 1)
				cursor = 0;
			else
				cursor++;

		if (key == enter && cursor == 0) {
			system("cls");
			Enter(menu, lenght2, cursor);

			if (cursor == 0)
				if (cursor == lenght2 - 1);

		}

	}

}

void ProgramMenu(char powerOff[3][30], int lenght, int cursor) {
	
	for (int i = 0; i < lenght; i++){
		
		if (cursor == i) {

			cout << (char)16 << " " << powerOff[i] << endl;

		}
		else {
			
			cout << " " << powerOff[i] << endl;

		}
			 
	
	}

	
	

}

void Enter(char menu[3][30],int lenght2,int cursor) {

	for (int i = 0; i < lenght2; i++) {

		if (cursor == i) {

				cout << (char)16 << " " << menu[i] << endl;

		}
		else {

			cout << " " << menu[i] << endl;

		}


	}

}

//void ToUpper(char word[],int lenght) {
//
//	for (int i = 0; i < lenght; i++)
//	{
//		if (word[i] >= 97 && word[i] <= 122)
//			word[i] -= 32;
//	}
//
//}
//
//int main() {
//
//	char word[40] = "hello";
//
//	ToUpper(word,10);
//	
//	cout << word << endl;
//}