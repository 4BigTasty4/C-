#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>

using namespace std;

//N2 Написать функцию, которая рисует треугольник заданного размера заданым символом
//      input: 5, *
//      output :
//      *
//      **
//  	***
//  	****
//  	*****

//void Mytriangle(int size, char symbol) {
//
//	for (int x = 1; x <= size; x++)
//	{
//
//		for (int y = 0; y < x; y++)
//		{
//			cout << symbol;
//		}
//		cout << endl;
//
//	}
//
//}
//
//
//void main() {
//	int size;
//	char symbol;
//
//	cout << "Hello World" << endl;
//
//	cout << "Input Size: ";
//	cin >> size;
//	cout << "Input Symbol: ";
//	cin >> symbol;
//
//	Mytriangle(size, symbol);
//}

//1. Написать функцию, которая принимает 3 символа и показывает на экране количество заглавных букв из них

//void MySymbol(char symbol, char symbol2, char symbol3) {
//
//	if (65 <= symbol && symbol <= 90) {
//		cout << symbol << endl;
//	}
//
//	if (65 <= symbol2 && symbol2 <= 90) {
//			cout << symbol2 << endl;
//	}
//
//	if (65 <= symbol3 && symbol3 <= 90) {
//			cout << symbol3 << endl;
//	}
//		
//}
//
//
//
//void main() {
//
//	char symbol;
//	char symbol2;
//	char symbol3;
//
//	cout << "Hello World" << endl;
//
//	cout << "Input Symbol: ";
//	cin >> symbol;
//	cout << "Input Symbol2: ";
//	cin >> symbol2;
//	cout << "Input Symbol3: ";
//	cin >> symbol3;
//
//	MySymbol(symbol, symbol2, symbol3);
//}

//
//void MyFunc(int number) {
//	
//	int counter = 0;
//
//	for (int i = 2; i < number; i++)
//	{
//		if (number % i == 0) {
//			counter++;
//		}
//		
//	}
//	if (counter != 0) {
//		cout << "Not Primary" << endl;
//	}
//	if (counter == 0) {
//		cout << "Primary" << endl;
//	}
//}
//
//
//
//
//void main() {
//	int number;
//	
//	cout << "Hello User" << endl;
//
//	cout << "Input Number: ";
//	cin >> number;
//
//	MyFunc(number);
//}

//int GetElementByindex(int nums[], int lenght, int index);
//
//
//int main() {
//
//	int nums[] = { 1,2,3,4,5 };
//
//	int lenght = 5;
//
//	cout << GetElementByindex(nums, lenght, 3);
//
//}
//
//int GetElementByindex(int nums[], int lenght, int index) {
//	
//	if(index > 0 && index < lenght )
//		return nums[index];
//
//	cout << "Number Not Found!" << endl;
//	
//	if (false) {
//
//		for (int i = 0; i < lenght; i++) {
//
//			if (i == index) {
//				return 1;
//			}
//
//		}
//
//	}
//
//	return 0;
//
//}

//4.Создать функцию, которая возвращает сумму всех элементов массива

//int AmountOfNumbers(int list[], int const lenght);
//
//int main() {
//
//	int const lenght = 6;
//
//	int list[lenght] = { 10, 20, 30, 40, 50, 60 };
//
//	cout << "Hello User" << endl;
//
//	cout << "Calculation Result: ";
//
//	AmountOfNumbers(list, lenght);
//}
//
//int AmountOfNumbers(int list[], int lenght) {
//
//	int result = 0;
//
//	for (int i = 0; i < lenght; i++)
//	{
//		result += list[i];
//	}
//
//	cout << result << endl;
//
//	return 0;
//}

//3.Создать функцию, которая возвращает минимальный элемент из массива

//void MinElement(int list[],int lenght) {
//
//	int result = list[0];
//
//	for (int i = 0; i < lenght; i++)
//	{
//
//		if (list[i] <= result) {
//			result = 1;
//			result *= list[i];
//			
//		}
//		
//	}
//	cout << "Min Number Is: " << result << endl;
//
//	
//}
//
//void main() {
//	
//	int const lenght = 4;
//	
//	int list[lenght] = { 10, 9, 4, 67 };
//
//	MinElement(list, lenght);
//}

// 2.Создать функцию, которая возвращает максимальный элемент из массива

//void MaxElement(int list[], int lenght) {
//
//	int result = list[0];
//
//	for (int i = 0; i < lenght; i++)
//	{
//
//		if (list[i] >= result) {
//			result = 1;
//			result *= list[i];
//
//		}
//
//	}
//	cout << "Max Number Is: " << result << endl;
//
//
//}
//
//void main() {
//
//	int const lenght = 4;
//
//	int list[lenght] = { 100, 9, 4, 67 };
//
//	MaxElement(list, lenght);
//}

//1 Написать сфункцию PrintArray() для трехмерного массива int

//int PrintArray(int list[2][1][3]) {
//
//	for (int i = 0; i < 5; i++)
//	{
//		
//		cout << "list [" << i << "] = " << list[i] << endl;
//
//		//cout << i << endl;
//	}
//
//	return 0;
//
//}
//
//int main() {
//
//	int list[2][1][3] =
//	{
//		{
//
//		{1, 2, 3}
//		
//		},
//		
//
//		{
//
//		{4, 5, 6}
//		
//		}
//
//	};
//
//	cout << PrintArray(list) << endl;
//
//}

//template<typename T>
//
//T Sum(T num1,T num2) {
//
//	return num1 + num2;
//
//}
//
//int main() {
//
//	cout << Sum(12,14) << endl;
//	cout << Sum(12.34,14.15) << endl;
//
//}

//template<typename T>
//
//T Power(T num1,T num2) {
//
//	int result = 1;
//
//	for (int i = 0; i < num2; i++)
//	{
//		result *= num1;
//	}
//
//	return result;
//
//}
//
//int main() {
//
//	cout << Power(3,2) << endl;
//
//}

//template<typename T>
//
//void Size() {
//
//	cout << sizeof(T) << endl;
//	
//	/*if (sizeof(T) >= 4)
//		cout << "Bigger" << endl;
//	else
//		cout << "Small" << endl;
//
//	return 0;*/
//}
//
//int main() {
//
//	Size<char>();	
//
//}

//enum GENDERS : char {
//	Male,
//	Female,
//	Other
//
//};
//
//void Register(char name[50], char surname[50],GENDERS gender ) {
//
//	if (gender == 0)
//		cout << "Name: " << name << ";" << " Surname: " << surname << ";" << " Gender: " << "Other" << endl;
//	if (gender == 1)
//		cout << "Name: " << name << ";" << " Surname: " << surname << ";" << " Gender: " << "Other" << endl;
//	if (gender == 2)
//		cout << "Name: " << name << ";" << " Surname: " << surname << ";" <<" Gender: " << "Other" << endl;
//
//}
//
//int main() {
//
//	char name[50] = {};
//	char surname[50] = {};
//
//	cout << "Hello User" << endl;
//
//	cout << "Input Name: ";
//	cin >> name;
//	cout << "Input SurName: ";
//	cin >> surname;
//
//	int genderinput;
//
//	cout << "Input Gender(0 - Male, 1 - Female, 2 - Other): ";
//	cin >> genderinput;
//
//	GENDERS gender = (GENDERS)genderinput;
//
//	Register(name,surname,gender);
//
//
//}

//char ToUpperWord(char word[],int lenght) {
//
//	for (int i = 0; i < lenght; i++)
//	{
//		cout << (char)toupper(word[i]) << endl;
//	}
//	return 0;
//}
//
//int main() {
//
//	int const lenght = 7;
//
//	char word[lenght] = "Beggin";
//
//
//	cout << ToUpperWord(word,lenght) << endl;
//}

//int ToUpperWord(char word[], int lenght) {
//
//	int count = 0;
//
//	for (int i = 0; i < lenght; i++)
//	{
//		if ('A' >= word[i] && word[i] <= 'Z')
//			count++;
//	}
//	return count;
//}
//
//int main() {
//
//	int const lenght = 7;
//
//	char word[lenght] = "BeGGin";	
//
//	cout << ToUpperWord(word, lenght) << endl;
//}

//int EvenNumber(int number[],int lenght) {
//	
//	int count = 0;
//
//	for (int i = 0; i < lenght; i++)
//	{
//		count += (number[i] % 2 == 0);
//	}
//	return count;
//}
//
//int main() {
//
//	int const lenght = 6;
//
//	int number[lenght] = { 1,2,3,4,5,6 };
//
//	cout << EvenNumber(number, lenght) << endl;
//}

//void Increement(int* number) {
//
//	++(*number);
//
//}
//
//int main() {
//
//	int number = 55;
//	int* numberPtr = &number;
//
//
//	Increement(numberPtr);
//	cout << number << endl;
//}

//void Decriment(int* number) {
//
//	--(*number);
//
//}
//
//int main() {
//
//	int number = 55;
//	//int* numberPtr = &number;
//
//
//	Decriment(&number);
//	cout << number << endl;
//}

//int getCount(FILE* getcount) {
//
//	int count = 0;
//
//	while (feof(getcount) == false)
//	{
//		fgetc(getcount);
//
//		count++;
//	}
//
//	return count -= 2;
//}

//int main() {

	/*int numberList[6] = { 10,15,20,50,30 };

	int* numberListPtr = numberList;

	cout << numberListPtr + 3 - numberListPtr << endl;*/

	/*int nums[3][3] = {

		{1,2,3},
		{4,5,6},
		{7,8,9}

	};

	int* numsPtr = nums[0];

	cout << *(numsPtr + 3) << endl;*/

	/*int nums[] = { 1,2,3,4,5 };

	cout << *(nums + 2) << endl;

	cout << (nums[0] + 2) << endl;*/

	/*FILE* name = fopen("test.txt", "r+");

	int symbol;
	
	while (feof(name) != true)
	{

		symbol = fgetc(name);

		cout << (char)symbol;

	}*/

	

	/*FILE* file = fopen("test.txt", "r+");

	int count = 0;

	while (feof(file) == false) {

		fgetc(file);

		count++;

	}
	count -= 2;
	
	cout << count << endl;*/


	/*FILE* getcount = fopen("test.txt", "r+");


	cout << getCount(getcount) << endl;*/



	/*FILE* name = fopen("test.txt", "w");

	const char list[] = "Say Hello World!";

	for (int i = 0; list[i] != NULL; i++)
	{
		fputc(list[i], name);
	}*/

	//N1 Написать функцию, которая будет сортировать массив из 50 int элементов,
//   и в конце будет выводить в отсортированном виде список элементов на экран консоли

	/*int number = 1;

	const int lenght = 50;

	int list[] = { 46,30,19,9,3,13,46,30,12,31,32,41,33,46,20,31,5,27,24,27,5,38,36,36,18,22,38,3,12,15,5,4,1,26,49,23,22,2,41,1,3,24,36,45,17,12,30,44,4,2 };

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
	*/
//}

//N2 Написать аналог функции из python not()

//bool MyFunc(bool* func) {
//
//	*func = !(*func);
//	
//	return *func;
//}
//
//int main() {
//
//	bool func = false;
//
//	bool* funcPtr = &func;
//
//	cout << MyFunc(funcPtr) << endl;
//}

//N1 Написать Swap метод для 2 переменных

//void MyFunc(int* number1, int* number2, int* number3) {
//
//	number1 = number2;
//
//	number1 = number3;
//
//	number2 = number1;
//
//	cout << *number1 << endl;
//	cout << *number2 << endl;
//
//}
//
//int main() {
//	
//	int number1 = 7;
//
//	int number2 = 3;
//
//	int number3 = 10;
//
//	MyFunc(&number1, &number2, &number3);
//}

// 1. Написать сфункцию PrintArray() для трехмерного массива int

//void PrintArray(int list[2][1][3]);
//
//int main() {
//
//	int list[2][1][3] =
//	{
//
//		{
//		
//			{1, 2, 3}
//				
//		},
//					
//		
//		{
//
//			{4, 5, 6}
//
//		}
//		
//	};
//		
//
//	PrintArray(list);
//}
//
//void PrintArray(int list[2][1][3])
//{
//	for (int x = 0; x < 2; x++)
//	{
//		for (int y = 0; y < 1; y++)
//		{
//			for (int z = 0; z < 3; z++) {
//				cout << ' ' << list[x][y][z];
//			}
//			cout << endl;
//		}
//	}
//	
//}

// 2. Написать функцию, которая возвращает сумму всех элементов трехмерного массива int

//int SummMasiv(int list[1][3][3]) {
//
//	int summa = 0;
//
//	for (int x = 0; x < 1; x++)
//	{
//		for (int y = 0; y < 3; y++)
//		{
//			for (int z = 0; z < 3; z++)
//			{
//				summa += list[x][y][z];
//			}
//			
//		}
//	}
//	return summa;
//}
//
//int main() {
//
//	int list[1][3][3] = {
//
//		{
//			
//			{1,2,3},
//			{4,5,6},
//			{7,8,9}
//
//		}
//
//	};
//	cout << SummMasiv(list);
//}

int main() {



}