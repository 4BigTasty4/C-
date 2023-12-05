#include <iostream>


using namespace std;


//N2 Написать функцию, которая рисует треугольник заданного размера заданым символом
//input: 5, *
//output :
//      *
//      **
//  	***
//  	****
//  	*****



void Mytriangle(int size, char symbol) {

	for (int x = 1; x <= size; x++)
	{

		for (int y = 0; y < x; y++)
		{
			cout << symbol;
		}
		cout << endl;

	}

}


void main() {
	int size;
	char symbol;

	cout << "Hello World" << endl;

	cout << "Input Size: ";
	cin >> size;
	cout << "Input Symbol: ";
	cin >> symbol;

	Mytriangle(size, symbol);
}


//1 Написать функцию, которая принимает 3 символа и показывает на экране количество заглавных букв из них


void MySymbol(char symbol, char symbol2, char symbol3) {

	if (65 <= symbol && symbol <= 90) {
		cout << symbol << endl;
	}

	if (65 <= symbol2 && symbol2 <= 90) {
			cout << symbol2 << endl;
	}

	if (65 <= symbol3 && symbol3 <= 90) {
			cout << symbol3 << endl;
	}
		
}



void main() {

	char symbol;
	char symbol2;
	char symbol3;

	cout << "Hello World" << endl;

	cout << "Input Symbol: ";
	cin >> symbol;
	cout << "Input Symbol2: ";
	cin >> symbol2;
	cout << "Input Symbol3: ";
	cin >> symbol3;

	MySymbol(symbol, symbol2, symbol3);
}