#include <iostream>

using namespace std;

//N1 Написать Swap метод для 2 переменных

void MyFunc(int* number1, int* number2, int* number3) {

	number1 = number2;

	number1 = number3;

	number2 = number1;

	cout << *number1 << endl;
	cout << *number2 << endl;

}

int main() {
	
	int number1 = 7;

	int number2 = 3;

	int number3 = 10;

	MyFunc(&number1, &number2, &number3);
}

//N2 Написать аналог функции из python not()

bool MyFunc(bool* func) {

	*func = !(*func);

	return *func;
}

int main() {

	bool func = false;

	bool* funcPtr = &func;

	cout << MyFunc(funcPtr) << endl;
}