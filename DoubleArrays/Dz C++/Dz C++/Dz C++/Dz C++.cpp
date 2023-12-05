#include <iostream>

using namespace std;

// 1. Написать сфункцию PrintArray() для трехмерного массива int

int PrintArray(int list[2][1][3]);

int main() {

	int list[2][1][3] =
	{

		{
		
			{1, 2, 3}
				
		},
					
		
		{

			{4, 5, 6}

		}
		
	};
		

	PrintArray(list);
}

int PrintArray(int list[2][1][3])
{
	for (int x = 0; x < 2; x++)
	{
		for (int y = 0; y < 1; y++)
		{
			for (int z = 0; z < 3; z++) {
				cout << ' ' << list[x][y][z];
			}
			cout << endl;
		}
	}
	return 0;
}

// 2. Написать функцию, которая возвращает сумму всех элементов трехмерного массива int

int SummMasiv(int list[1][3][3]) {

	int summa = 0;

	for (int x = 0; x < 1; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int z = 0; z < 3; z++)
			{
				summa += list[x][y][z];
			}
			
		}
	}
	return summa;
}

int main() {

	int list[1][3][3] = {

		{
			
			{1,2,3},
			{4,5,6},
			{7,8,9}

		}

	};
	cout << SummMasiv(list);
}
