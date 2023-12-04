#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <cstring>
#include <conio.h>
#include <windows.h>

using namespace std;

void Decriment(int* number);
void Incriment(int* number);
int len(char word[]);
char mytoupper(char symbol);
char mytolower(char symbol);
void ToUpperWord(char word[], int length);
void PrintMenu(char menu[][20], int menuLength, int cursor);
int ChangeNumber(int num);
void PrintArray(int nums[5], int length);
void ChangeArray(int nums[]);
int GetNullTerminatorIndex(char word[], int length);
void SwapElementsInArray(int arr[], int left, int right);
int GetElementIndex(int nums[], int element, int length);
int GetElementByIndex(int nums[], int length, int index);
void PrintArray(int nums[], int length);
void PrintDoubleArray(int nums[][3], int rowsCount);


                                                    //01,04 = 08.07.2022


//void MyFunction() {
//    int number = 100;
//
//    cout << number << endl;
//
//    number++;
//}


//void MyFunction() {
//    int number = 90;
//
//    if (number < 100)
//        cout << "small!" << endl;
//
//    cout << "End" << endl;
//}



//void MyFunction() {
//    
//    while (true)
//        cout << "while" << endl;
//
//    for (;;)
//        cout << "for" << endl;
//
//    if(true)
//        cout << "if" << endl;
//
//}



//void MyFunction() {
//    for (int x = 0; x < 3; x++) {
//        cout << "* * *" << endl;
//    }
//}



//void DrawSquare(int num) {
//    cout << num << endl;
//}


//void DrawSquare(int num) {
//    for (int x = 0; x < num; x++) {
//        for (int y = 0; y < num; y++) {
//            cout << "* ";
//        }
//        cout << endl;
//    }
//}





//void DrawSquare(char symbol) {
//    for (int x = 0; x < 5; x++) {
//        for (int y = 0; y < 5; y++) {
//            cout << symbol << " ";
//        }
//        cout << endl;
//    }
//}




//void DrawSquare(bool hasSpace) {
//    for (int x = 0; x < 3; x++) {
//        for (int y = 0; y < 3; y++) {
//
//            cout << (hasSpace ? "* " : "*");
//
//            /*if (hasSpace)
//                cout << "* ";
//            else
//                cout << "*";*/
//        }
//        cout << endl;
//    }
//}





//void DrawSquare(int row, int column, char symbol) {
//    for (int x = 0; x < column; x++) {
//        for (int y = 0; y < row; y++) {
//            cout << symbol << " ";
//        }
//        cout << endl;
//    }
//}



//void IsAdult(int age) {
//    if (age >= 18)
//        cout << "User is adult!" << endl;
//    else
//        cout << "User is not adult!" << endl;
//}




//bool IsAdult(int age) {
//    /*bool check = true;
//    return check;*/
//    cout << "Start" << endl;
//
//    if (age >= 18)
//        return true;
//    else
//        return false;
//
//    cout << "End" << endl;
//}



//bool InfinityLoop() {
//    cout << "Start" << endl;
//    while (true) {
//        return true;
//    }
//    cout << "End" << endl;
//}




//bool IsAdult(int age) {
//    return age >= 18;
//    
//    /*if (age >= 18)
//        return true;
//    else
//        return false;*/
//}




//void IsPrimary(int num) {
//    bool prim = true;
//
//    for (int i = 2; i < (num / 2) + 1; i++)
//    {
//        if (num % i == 0) {
//            prim = false;
//            break;
//        }
//    }
//
//    if (prim)
//        cout << "Primary" << endl;
//}





//bool IsPrimary(int num) {
//    bool prim = true;
//
//    for (int i = 2; i < num; i++)
//    {
//        if (num % i == 0) {
//            prim = false;
//            break;
//        }
//    }
//
//    return prim;
//}



//void DrawSquare(bool number) {
//
//    for (int x = 0; x < 3; x++)
//    {
//        for (int y = 0; y < 3; y++)
//        {
//            if (number) {
//                cout << "x ";
//            }
//            else
//            {
//                cout << "x";
//            }
//        }
//        cout << endl;
//    }
//
//}


//bool MyFunc(int number) {
//
//    int count = 0;
//    
//    for (int i = 2; i < number; i++)
//    {
//        if (i % 2 == 0)
//            count++;
//    }
//    if (count > 0)
//        return true;
//}



//void SayYourAge(bool hasVisa, int age = 18) {
//    if (hasVisa == false)
//        return;
//
//    cout << "You are " << age << " years old" << endl;
//}





//int Func(int num1, int num2 = 10, char symbol = 'a') {
//    num1 = (num2 == 10 ? num2 : num1);
//    for (int i = 1; i < num1; i++) {
//        cout << (int)(num2 + symbol) << endl;
//        if (i % 5 == 0)
//            return 1;
//    }
//    //return 0;
//}
//
//void SayHello();
//int GetNegativeNumber(int number);

//void main()
//{
    //cout << Func(1);
    //cout << Func(1, 5) << endl;

    //CallFunc();
    /*
    SayYourAge(true);
    SayYourAge(false, 10);
    */


    //char symbol = 'a';
    //MyFunction(symbol);

    //DrawSquare(5);

    //DrawSquare('@');

    //DrawSquare(5, 10, 'a');

    //IsAdult(15);

    //InfinityLoop();

    //cout << IsAdult(15) << endl;

    /*bool result = Func(7);
    cout << result << endl;*/
//}

//void SayHello() {
//    cout << "Hello World!" << endl;
//}

//int GetNegativeNumber(int number) {
//    return (number <= 0) ? number : -number;
//}


//int main() {
//
//    cout << "Hello World" << endl;
//
//    int number;
//
//    cout << "Input number: ";
//    cin >> number;
//
//    cout << MyFunc(number);
//}

//void main()
//{
//    bool number;
//
//    cout << "Input Yes or Not (1 - yse; 0 - no): ";
//    cin >> number;
//
//    DrawSquare(number);
//}


												//11.07.2022


int main() 
{
	if (false) {
		int nums[4];

		// -858993460
		cout << nums[3] << endl;
	}

	if (false) {
		double nums[5] = {};

		// default value
		cout << nums[2] << endl;
	}

	if (false) {
		/* Bad solution
		int nums[5] = {};

		nums[0] = 1;
		nums[1] = 2;
		nums[2] = 3;
		nums[3] = 4;
		nums[4] = 5;
		cout << nums[0] << endl;
		cout << nums[1] << endl;
		cout << nums[2] << endl;
		cout << nums[3] << endl;
		cout << nums[4] << endl;
		*/

		//// good solution 
		//int nums[5] = {};

		//// set values
		//for (int i = 0, value = 1; i < 5; i++, value++) {
		//	nums[i] = value;
		//}

		//// print
		//for (int i = 0; i < 5; i++) {
		//	cout << "nums[" << i << "] = \t" << nums[i] << endl;
		//}

		/*int numbers[] = { 0,1,2,3,4,5 };

		for (int i = 0, result = 1; i < 6; i++, result++)
		{
			numbers[i] = result;
		}

		for (int i = 0; i < 6; i++)
		{
			cout << "numbers" << "[" << i << "]" << " = " << numbers[i] << endl;
		}*/

	}


	if (false) {
		{
			int nums[] = { 234, -12, 10, 0, 324 };

			PrintArray(nums, 5);
		}

		cout << endl;

		{
			int nums[3] = { 234, -12, 10 };

			PrintArray(nums, 3);
		}
	}

	

	if (false) {
		// char arr[] = { true, 'q', 123, 453.6346 };

		/*char word[] = { 'q','w', 'e', 'r', 't','y', '\0', '2', '\n', '\a', 123, '\0' };

		cout << word << endl;
		cout << word[2] << endl;*/

		/*char list[] = { 'E','l','i','s','h','\0'};

		cout << list << endl;*/

	}

	if (false) {

		char word[] = { 1,2,3,4,5 };

		cin >> word;

		for (int i = 0; i < 10; i++)
		{
			cout << word[i] << endl;
		}

		//cout << "Word: " << word << endl;
	}

	if (false) {

		char word[100] = {};

		cin >> word;

		cout << "Index of '\\0': " << GetNullTerminatorIndex(word, 100) << endl;;
	}


	if (false) {
		int nums[] = { 1,2,3,4,5 };

		PrintArray(nums, 5);
		cout << endl;

		int temp = nums[1];
		nums[1] = nums[4];
		nums[4] = temp;

		PrintArray(nums, 5);
	}

	if (false) {

		int list[] = { 1,2,3,4,5 };
		
		int smash = list[2];
		list[2] = list[3];
		list[3] = smash;

		PrintArray(list, 5);
	}

	if (false) {
		int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

		int left, right;

		cout << "Input indexes to swap: " << endl, cin >> left, cin >> right;

		SwapElementsInArray(nums, left, right);

		PrintArray(nums, 10);
	}


	if (false) {
		/*int number = 100;
		cout << ChangeNumber(number) << endl;
		cout << number << endl;*/

		/*int nums[] = { 1,2,3,4,5 };
		ChangeArray(nums);
		PrintArray(nums, 5);*/

		// value types

		//int num1 = 123;
		//int num2 = num1;
		//num2 += 100;
		//cout << num1 << endl;	// 123
		//cout << num2 << endl;	// 223


		// reference types

		/*int nums1[5] = { 1,2,3,4,5 };
		int* nums2 = nums1;

		nums2[2] = 123;
		PrintArray(nums1, 5);
		cout << endl;
		PrintArray(nums2, 5);*/

	}


													// 13 - 15.07.2022


	if (false) {
		int nums[] = { 1,2,3,4,5,6,7,8,9 };
		int length = 9;

		cout << GetElementIndex(nums, length, 9);
	}

	if (false) {
		int nums[] = { 1,2,3,4,5 };
		int length = 5;

		cout << GetElementByIndex(nums, length, 2);
	}

	if (false) {
		/*char word[] = "qwerty";
		cout << word[5] << endl;*/

		/*int nums[2][4] = {
			{1,2,3,4},
			{5,6,7,8},
		};*/

		int nums[][3] = {
			{4,5,6},
			{8,2,6},
			{3,4,5},
			{3,10,5},
			{8,2,6},
		};

		cout << nums[3][1] + nums[1][2] << endl;

		PrintDoubleArray(nums, 5);
	}

	if (false) {
		char names[][6] = {
			{'d', 'a', 'n', 'i', 'z', '\0'},
			{'r', 'u', 'f', 'a', 't', '\0'},
			{'e', 'l', 'n', 'u', 'r', '\0'},
		};

		for (int i = 0; i < 3; i++)
		{
			cout << names[i] << endl;
		}
	}

	if (false) {
		int arr[2][3][3] = {
			{
				{1,2,3},
				{1,2,3},
				{1,2,3}
			},
			{
				{1,2,3},
				{1,2,3},
				{1,2,3}
			}
		};

		cout << arr[1][1][1] << endl;
	}


												// 18.07.2022


	if (false) {
		char word[50] = "qwerty";
		char word2[50] = "test";

		//word = "Elnur";
		strcpy(word, "test");
		strcpy(word, word2);

		cout << word << endl;
	}

	if (false) {
		char word[50] = "qwerty";
		//char word[3] = { 'q', 'w', 'e' };

		//cout << "Word's length is: " << len(word) << endl;
		cout << "Word's length is: " << strlen(word) << endl;
	}

	if (false) {
		//// standart library
		//cout << (char)toupper('a') << endl;
		//cout << (char)toupper('A') << endl;
		//cout << (char)toupper('#') << endl;

		//cout << (char)tolower('a') << endl;
		//cout << (char)toupper('A') << endl;
		//cout << (char)toupper('#') << endl;

		//// custom
		//cout << mytoupper('a') << endl;		// A
		//cout << mytoupper('B') << endl;		// B
		//cout << mytoupper('@') << endl;		// 

		//cout << mytolower('a') << endl;		// a
		//cout << mytolower('B') << endl;		// b
		//cout << mytolower('@') << endl;		// 

		char word[10] = "Qwerty";
		ToUpperWord(word, 10);
		cout << word << endl;		// QWERTY

		// QWERTY	->   QWERTY
		// agd2#q	->   AGD2#Q
		// asc as	->   ASC AS
	}

	if (false) {
		/*
		int age;
		cin >> age;
		cout << "Your age is: " << age << " years old";
		*/

		char word[80];
		cin >> word;
		cout << word << endl;
	}

	if (false) {
		//int key = cin.get();
		//int key = getchar();
		//cout << "Key: " << key << endl;

		/*char key;
		cin >> key;
		cout << "Key: " << (int)key << endl;*/
	}

	if (false) {
		const double pi = 3.14;

		cout << pi;
	}

	if (false) {
		system("dir");
	}

	if (false) {
		/*cout << "Home" << endl;
		cout << "About" << endl;
		cout << "Rating" << endl;
		cout << "Statistics" << endl;
		cout << "Exit" << endl;*/

	}

	if (false) {

		system("dir");

	}

	if (false) {



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

	if (false)
	{

		int cursor = 1;

		const int lenght = 5;

		const int up = 72;
		const int down = 80;

		char list[lenght][20] = {

			"Home",
			"About",
			"Rating",
			"Statistics",
			"Exit"

		};

		while (true)
		{
			system("cls");
			PrintMenu(list, lenght, cursor);

			int key = _getch();

			if (key == up)
			{
				if (cursor == 0)
				{
					cursor = lenght - 1;
				}
				else {
					cursor--;
				}
			}
			else if (key == down)
				if (cursor == lenght - 1)
					cursor = 0;
				else
					cursor++;
		}

		
	}

	if (false)
	{

		int number = 100;

		Incriment(&number);
		cout << number << endl;
	}
	
	if (false)
	{

		int number = 100;

		Decriment(&number);
		cout << number << endl;
	}
	

}


void Decriment(int* number) {

	cout << *number << endl;

	--(*number);

}



void Incriment(int* number) {

	cout << *number << endl;

	++(*number);

}


// AllFunction

void PrintMenu(char list[][20], int lenght, int cursor) {

	for (int i = 0; i < lenght; i++)
	{
		cout << (cursor == i) << list[i] << endl;
	}

}

void SwapElementsInArray(int arr[], int left, int right) {
	int temp = arr[left];
	arr[left] = arr[right];
	arr[right] = temp;
}


int GetNullTerminatorIndex(char word[], int length) {
	for (int i = 0; i < length; i++)
		if (word[i] == '\0')
			return i;
}


void ChangeArray(int nums[]) {
	nums[2] = -123;
}

int ChangeNumber(int number) {
	number = 123;

	cout << number << endl;

	return number;
}


void PrintDoubleArray(int nums[][3], int rowsCount) {
	for (int x = 0; x < rowsCount; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cout << nums[x][y] << "\t";
		}
		cout << endl;
	}
}

int GetElementByIndex(int nums[],int length,int index) {
	return (index >= 0 && index < length)
		? nums[index]
		: -1;
}

int GetElementIndex(int nums[], int length , int element) {
	for (int i = 0; i < length; i++)
		if (nums[i] == element)
			return i;

	return -1;
}

void PrintArray(int nums[], int length) {
	for (int i = 0; i < length; i++) {
		cout << "nums[" << i << "] = \t" << nums[i] << endl;
	}
}

void ToUpperWord(char word[], int length) {
	//for (int i = 0; i < length; i++)
	//{
	//	// lower
	//	if (word[i] >= 97 && word[i] <= 122)
	//		word[i] -= 32;
	//}

	for (int i = 0; i < length; i++)
		word[i] = toupper(word[i]);
}

char mytoupper(char symbol) {
	/*if (symbol == 'a')
		return 'A';
	if (symbol == 'b')
		return 'B';
	if (symbol == 'c')
		return 'C';*/

	const int registerDiff = 32;

	// upper
	if (symbol >= 65 && symbol <= 90)
		return symbol;

	// lower
	if (symbol >= 97 && symbol <= 122)
		return symbol - registerDiff;

	return ' ';
}

char mytolower(char symbol) {
	const int registerDiff = 32;

	// upper
	if (symbol >= 65 && symbol <= 90)
		return symbol + registerDiff;

	// lower
	if (symbol >= 97 && symbol <= 122)
		return symbol;

	return ' ';
}

void PrintMenu1(char menu[5][20], int menuLength, int cursor) {
	// get console reference
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 0; i < menuLength; i++)
	{
		if (cursor == i) {
			SetConsoleTextAttribute(console, 0x70);
			//system("color 70");
			cout << (char)16 << " " << menu[i] << endl;
			//system("color 07");
			SetConsoleTextAttribute(console, 0x07);
		}
		else {
			cout << "  " << menu[i] << endl;
		}
	}
}

int len(char word[]) {
	for (int i = 0; ; i++)
		if (word[i] == '\0')
			return i;
}