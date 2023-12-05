#include <iostream>
#include <cstring>


#pragma once

using namespace std;

void PrintMenu(char menu[6][20], int menulenght, int cursor);

int main()
{
	if (false) {

		system("dir");

	}
	
	if (true) {

		

		const int menulenght = 5;
		const int up = 72;
		const int down = 80;

		int cursor = 3;

		char menu[menulenght][20] = {

			"Home",
			"About",
			"Rating",
			"Statistics",
			"Exit"

		};

		while (true)
		{
			system("cls");
			PrintMenu(menu, menulenght, cursor);

			int key = _getch();

			if (key == up)
				if (cursor == 0)
					cursor = menulenght - 1;
				else
					cursor--;
			else if (key == down)
				if (cursor == menulenght - 1)
					cursor = 0;
				else
					cursor++;

			
		}
	
	}


}

void PrintMenu(char menu[6][20], int menulenght, int cursor) {

	for (int i = 0; i < menulenght; i++)
	{
		cout << (cursor == i) << menu[i] << endl;
	}

}