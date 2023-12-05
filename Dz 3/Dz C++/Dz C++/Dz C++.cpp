#include <iostream>


using namespace std;


int main()
{



// N1 пользователь вводит 3 числа
//	  на экран выходит наибольшее из них 


	int num;
	int number;
	int summa;

	num = 0;
	number = 0;
	summa = 0;

	cout << "Hello User" << endl;

	cout << "Input Number 1: ";
	cin >> num;
 	cout << "Input Number 2: ";
	cin >> number;
	cout << "Input Number 3: ";
	cin >> summa;

	if (num > number && num > summa) {
		cout << num;
	}
	else if (number > num && number > summa) {
		cout << number;
	}
	else if (summa > num && summa > number) {
		cout << summa;
	}
		
	


// N2 пользователь вводит 3 числа
//    на экран выходит среднее арифметическое


	int num;
	int number;
	int summa;
	int result;

	num = 0;
	number = 0;
	summa = 0;


	cout << "hello user" << endl;

	cout << "input number 1: ";
	cin >> num;
	cout << "input number 2: ";
	cin >> number;
	cout << "input number 3: ";
	cin >> summa;

	if (num >= 0 && number >= 0 && summa >= 0){
		result = ((num + number + summa) / 3);
		cout << result;
	}
	else {
		cout << "Error";
	}



 // N3 пользователь вводит число  и процент
 //    на экран выходит процент от числа


	double number;
	double percent;
	double result;

	number = 0;
	percent = 0;

	cout << "Hello User" << endl;

	cout << "Input Number: ";
	cin >> number;
	cout << "Input Percent: ";
	cin >> percent;

	if (number > 0 && percent > 0) {
		result = (number * percent) / 100;
		cout << result;
	}
	else {
		cout << "Error";
	}



// N4 пользователь вводит символ
//    Необходимо проверить, является ли символ английской буквой


	char symbol;

	cout << "Hello User" << endl;
	cout << "Input Symbol: ";
	cin >> symbol;

	if ((char)symbol == 65 || (char)symbol == 66 || (char)symbol == 67 || (char)symbol == 68 ||
		(char)symbol == 69 || (char)symbol == 70 || (char)symbol == 71 || (char)symbol == 72 ||
		(char)symbol == 73 || (char)symbol == 74 || (char)symbol == 75 || (char)symbol == 76 ||
		(char)symbol == 77 || (char)symbol == 78 || (char)symbol == 79 || (char)symbol == 80 ||
		(char)symbol == 81 || (char)symbol == 82 || (char)symbol == 83 || (char)symbol == 84 ||
		(char)symbol == 85 || (char)symbol == 86 || (char)symbol == 87 || (char)symbol == 88 ||
		(char)symbol == 89 || (char)symbol == 90) {

		cout << "True" << endl;

	}
	else if ((char)symbol == 97 || (char)symbol == 98 || (char)symbol == 99 || (char)symbol == 100 ||
		(char)symbol == 101 || (char)symbol == 102 || (char)symbol == 103 || (char)symbol == 104 ||
		(char)symbol == 105 || (char)symbol == 106 || (char)symbol == 107 || (char)symbol == 108 ||
		(char)symbol == 109 || (char)symbol == 110 || (char)symbol == 111 || (char)symbol == 112 ||
		(char)symbol == 113 || (char)symbol == 114 || (char)symbol == 115 || (char)symbol == 116 ||
		(char)symbol == 117 || (char)symbol == 118 || (char)symbol == 119 || (char)symbol == 120 ||
		(char)symbol == 121 || (char)symbol == 122) {

		cout << "True" << endl;

	}
	else {
		cout << "This Symbol Is Not An English Letter" << endl;
	}




// N5 пользователь вводит символ
//    Необходимо проверить, является ли символ числом

		char symbol;

		cout << "Hello User" << endl;
		cout << "Input Symbol: ";
		cin >> symbol;

		if ((char)symbol == 48 || (char)symbol == 49 || (char)symbol == 50 || (char)symbol == 51 ||
			(char)symbol == 52 || (char)symbol == 53 || (char)symbol == 54 || (char)symbol == 55 ||
			(char)symbol == 56 || (char)symbol == 57) {

			cout << "True" << endl;
		}
		else {
			cout << "It's Not A Number" << endl;
		}



	

}

