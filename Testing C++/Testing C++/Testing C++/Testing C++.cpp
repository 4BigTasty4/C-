#include <iostream>

using namespace std;

int main()
{


// N1 Создать приложение с использованием псевдографики из ASCII таблицы


	 /*int symbol = 201;
	int num = 200;
	int number = 187;
	int nram = 188;
	int pram = 6;

	cout << (char)symbol;
	cout << "             " << (char)number << endl << (char)pram << " Hello User! " << (char)pram << endl << (char)num;
	cout << "             " << (char)nram;*/








// N1 вводит количество дней: 370 необходимо вычислить лет и дней : 1 год 5 дней


	/*int day;
	int summa;
	int result;

	cout << "Hello User" << endl;
	cout << "Input Day: ";
	cin >> day;
	
	summa = day / 365;
	result = day % 365;

	cout << "Year: " << summa << endl;
	cout << "Day: " << result << endl;*/


// N2 вводит количество деньги в следующем формате: 1235.34
//	  необходимо вывести на экран следующего типа сообщение : 1235 usd 34 cent


	/*double money;
	double result;

	money = 0;

	cout << "Hello User" << endl;
	cout << "Input Your Money: ";
	cin >> money;

	result = (money - (int)money) * 100;

	cout << "USD: " << (int)money << endl;
	cout << "CENT: " << result << endl;*/


// N3 вводит количество денег в azn: 170
//	  возвращается количество денег в usd : 100

	/*double money;
	double result;


	cout << "Hello User" << endl;
	cout << "Input Money In AZN: ";
	cin >> money;

	result = money / 1.7;

	cout << "USD: " << result << endl;*/








// N1 пользователь вводит 3 числа
//	  на экран выходит наибольшее из них 


	//int num;
	//int number;
	//int summa;

	//num = 0;
	//number = 0;
	//summa = 0;

	//cout << "Hello User" << endl;

	//cout << "Input Number 1: ";
	//cin >> num;
	//cout << "Input Number 2: ";
	//cin >> number;
	//cout << "Input Number 3: ";
	//cin >> summa;

	//if (num > number && num > summa) {
	//	cout << num;
	//}
	//else if (number > num && number > summa) {
	//	cout << number;
	//}
	//else if (summa > num && summa > number) {
	//	cout << summa;
	//}


// N2 пользователь вводит 3 числа
//    на экран выходит среднее арифметическое

	/*int num;
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
	}*/


	// N3 пользователь вводит число  и процент
	//    на экран выходит процент от числа

	/*double number;
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
		}*/


// N4 пользователь вводит символ
//    Необходимо проверить, является ли символ английской буквой


	/*char symbol;

	cout << "Hello User" << endl;
	cout << "Input Symbol: ";
	cin >> symbol;

	if ((char)symbol == 65 || (char)symbol == 66 || (char)symbol == 67 || (char)symbol == 68 ||
		(char)symbol == 69 || (char)symbol == 70 || (char)symbol == 71 || (char)symbol == 72 ||
		(char)symbol == 73 || (char)symbol == 74 || (char)symbol == 75 || (char)symbol == 76 ||
		(char)symbol == 77 || (char)symbol == 78 || (char)symbol == 79 || (char)symbol == 80 ||
		(char)symbol == 81 || (char)symbol == 82 || (char)symbol == 83 || (char)symbol == 84 ||
		(char)symbol == 85 || (char)symbol == 86 || (char)symbol == 87 || (char)symbol == 88 ||
		(char)symbol == 89 || (char)symbol == 90){

		cout << "True" << endl;

	}
	else if((char)symbol == 97 || (char)symbol == 98 || (char)symbol == 99 || (char)symbol == 100 ||
			(char)symbol == 101 || (char)symbol == 102 ||(char)symbol == 103 || (char)symbol == 104 ||
			(char)symbol == 105 || (char)symbol == 106 ||(char)symbol == 107 || (char)symbol == 108 ||
			(char)symbol == 109 || (char)symbol == 110 ||(char)symbol == 111 || (char)symbol == 112 ||
			(char)symbol == 113 || (char)symbol == 114 ||(char)symbol == 115 || (char)symbol == 116 ||
			(char)symbol == 117 || (char)symbol == 118 ||(char)symbol == 119 || (char)symbol == 120 ||
			(char)symbol == 121 || (char)symbol == 122){

		cout << "True" << endl;

	}
	else {
		cout << "This Symbol Is Not An English Letter" << endl;
	}*/


// N5 пользователь вводит символ
//    Необходимо проверить, является ли символ числом

	//char symbol;
	//	
	//	cout << "Hello User" << endl;
	//	cout << "Input Symbol: ";
	//	cin >> symbol;
	//
	//	if ((char)symbol == 48 || (char)symbol == 49 || (char)symbol == 50 || (char)symbol == 51 || 
	//		(char)symbol == 52 || (char)symbol == 53 || (char)symbol == 54 || (char)symbol == 55 || 
	//		(char)symbol == 56 || (char)symbol == 57) {
	//		
	//		cout << "True" << endl;
	//	}
	//	else {
	//		cout << "It's Not A Number" << endl;
	//	}








//N1 Напишите программу, которая вычисляет сумму целых 
//   чисел от а до 500 (значение a вводится с клавиатуры)
//   (если а будет больше 500 - перевернуть цикл)


	/*int number;
	int result;

	cout << "Hello User" << endl;

	cout << "Input Number: ";
	cin >> number;

	result = 0;

	for (int i = number; i <= 500; i++)
	{
		result += i;

	}
	cout << result << endl;*/


//N2 Напишите программу, которая запрашивает два целых числа 
//   x и y, после чего вычисляет и выводит значение x в степени y


	/*int result;
	int number;
	int degree;

	result = 1;

	cout << "Hello User" << endl;

	cout << "Input Number: ";
	cin >> number;
	cout << "Input Degree: ";
	cin >> degree;

	for (int i = 1; i <= degree;i++)
	{

		result *= number;

	}
	cout << result << endl;*/


	//N3 Найти произведение всех чётных чисел от a до b (значение 
	//   a и b вводится с клавиатуры

	/*int number_a;
	int number_b;
	int result;

	result = 1;

	cout << "Hello User" << endl;

	cout << "Input Number A: ";
	cin >> number_a;
	cout << "Input Number B: ";
	cin >> number_b;


	for (int i = number_a; i <= number_b; i++)
	{

		if (i % 2 == 0) {

			result *= i;

		}


	}
	cout << result << endl;*/








//N 1 пользователь вводит диапазон значений (start, end)
//	  пользователь вводит число, которое он загадал
//	  программа последовательно предлагает свои числа
//	  пользователь отвечает(загаданное число больше, меньше или же равно)
// 	  в конечном итоге программа угадывает число


	int result;
	int number;
	int beggin;
	int end;
	int num;

	number = 0;
	
	cout << "Hello User " << endl;

	cout << "Begin Diapazon: ";
	cin >> beggin;

	cout << "End Diapazon: ";
	cin >> end;

	cout << "Choose The Number: ";
	cin >> number;
	
	
	while (true)
	{
		if (beggin > 0 && end > 0) {

			result = (beggin + end) / 2;
			 
			cout << "Up Or Down : Choose <1 - Up, 2 - Down>: ";
			cin >> num;

			if (result != number) {

				cout << "Up Or Down: Choose <1 - Up,2 - Down>: ";
				cin >> num;
				

				if (num == 1) {

					result = (result + beggin) / 2;

					cout << result << endl;
				}
			}

			if (result == number) {

				cout << "Your Number IS: " << result << endl;

			}
		}
	
	}

	

}
