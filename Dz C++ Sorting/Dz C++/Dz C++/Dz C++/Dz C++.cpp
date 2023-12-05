#include <iostream>

using namespace std;

//N1 Написать функцию, которая будет сортировать массив из 50 int элементов,
//   и в конце будет выводить в отсортированном виде список элементов на экран консоли


int main(){

	int number = 1;

	const int lenght = 50;

	int list[] = {46,30,19,9,3,13,46,30,12,31,32,41,33,46,20,31,5,27,24,27,5,38,36,36,18,22,38,3,12,15,5,4,1,26,49,23,22,2,41,1,3,24,36,45,17,12,30,44,4,2};

	for (int x = 0; x < lenght; x++) {

		for (int y = 0; y < lenght - 1; y++) {

			if (list[y] > list[1 + y]) {

				number = list[y + 1];

				list[y + 1] = list[y];
				list[y] = number;

			}

		}

	}

	for (int i = 0; i < 50; i++) {
		cout << list[i] << endl;
	}

}