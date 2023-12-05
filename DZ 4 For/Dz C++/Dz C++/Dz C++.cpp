#include <iostream>


using namespace std;


int main()
{
	
//N1 Напишите программу, которая вычисляет сумму целых 
//   чисел от а до 500 (значение a вводится с клавиатуры)
//   (если а будет больше 500 - перевернуть цикл)


	int number;
	int result;

	cout << "Hello User" << endl;

	cout << "Input Number: ";
	cin >> number;

	result = 0;

	for (int i = number; i <= 500; i++)
	{
		
		result += i;

	}
	cout << result << endl;


//N2 Напишите программу, которая запрашивает два целых числа 
//   x и y, после чего вычисляет и выводит значение x в степени y


	int result;
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
	cout << result << endl;


//N3 Найти произведение всех чётных чисел от a до b (значение 
//   a и b вводится с клавиатуры)

	int number_a;
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
	cout << result << endl;



}

