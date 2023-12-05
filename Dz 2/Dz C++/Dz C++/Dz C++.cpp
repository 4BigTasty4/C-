#include <iostream>


using namespace std;


int main()
{

// N1 вводит количество дней: 370 необходимо вычислить лет и дней : 1 год 5 дней


	int day;
	int summa;
	int result;

	cout << "Hello User" << endl;
	cout << "Input Day: ";
	cin >> day;

	summa = day / 365;
	result = day % 365;

	cout << "Year: " << summa << endl;
	cout << "Day: " << result << endl;



// N2 вводит количество деньги в следующем формате: 1235.34
//	  необходимо вывести на экран следующего типа сообщение : 1235 usd 34 cent


	double money;
	double result;

	money = 0;

	cout << "Hello User" << endl;
	cout << "Input Your Money: ";
	cin >> money;

	result = (money - (int)money) * 100;

	cout << "USD: " << (int)money << endl;
	cout << "CENT: " << result << endl;






// N3 вводит количество денег в azn: 170
//	  возвращается количество денег в usd : 100

	double money;
	double result;


	cout << "Hello User" << endl;
	cout << "Input Money In AZN: ";
	cin >> money;

	result = money / 1.7;

	cout << "USD: " << (int)result << endl;


	

}

