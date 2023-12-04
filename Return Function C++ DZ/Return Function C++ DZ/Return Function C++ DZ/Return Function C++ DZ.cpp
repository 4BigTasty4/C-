#include <iostream>

using namespace std;


//1. Написать функцию, которая принимает 3 символа и показывает на экране количество заглавных букв из них


//void MySymbol(char symbol,char symbol_1,char symbol_2) {
//
//	if ((symbol >= char(65) && symbol <= char(90))) {
//		cout << symbol << endl;
//	}
//	if ((symbol_1 >= char(65) && symbol_1 <= char(90))) {
//		cout << symbol_1 << endl;
//	}
//	if ((symbol_2 >= char(65) && symbol_2 <= char(90))) {
//		cout << symbol_2 << endl;
//	}
//}



//void main() {
//
//	//N1
//
//	/*cout << "Hello World" << endl;
//
//	char symbol;
//	char symbol_1;
//	char symbol_2;
//
//	cout << "Input Symbol 1: ";
//	cin >> symbol;
//	cout << "Input Symbol 2: ";
//	cin >> symbol_1;
//	cout << "Input Symbol 3: ";
//	cin >> symbol_2;
//
//
//	MySymbol(symbol, symbol_1, symbol_2);*/
//}



//N2. Написать функцию, которая рисует треугольник заданного размера заданым символом
//
//input : 5, *
//
//output :
//	*
//	**
//	***
//	****
//	*****



//void DrowTriangle(int size,char symbol) {
//
//	for (int x = 0; x < size; x++)
//	{
//		for (int i = 0; i <= x; i++)
//		{
//			cout << symbol;
//		}
//		cout << endl;
//	}
//
//}



//void main() {
//
// N2
// 
//	cout << "Hello World" << endl;
//
//	int size;
//	char symbol;
//
//	cout << "Input Size: ";
//	cin >> size;
//	cout << "Input Symbol: ";
//	cin >> symbol;
//
//	DrowTriangle(size, symbol);
//}


                                                     //08.07.22


//2. Создать функцию, которая возвращает максимальный элемент из массива

//int MaksElement(int list[]) {
//
//    int result = list[0];
//
//    for (int i = 0; i < 4; i++)
//    {
//        if (list[i] >= result) {
//            result = 1;
//            result *= list[i];
//        }
//    }
//    return result;
//}
//
//int main() {
//
//    int list[] = { 17,4,19,20 };
//
//    cout << MaksElement(list) << endl;
//}



//3. Создать функцию, которая возвращает минимальный элемент из массива


//int MinElement(int list[]) {
//
//    int result = list[0];
//
//    for (int i = 0; i < 4; i++)
//    {
//        if (list[i] <= result) {
//            result = 1;
//            result *= list[i];
//        }
//    }
//    return result;
//}
//
//int main() {
//
//    int list[] = { 17,4,1,20 };
//
//    cout << MinElement(list) << endl;
//}



//4. Создать функцию, которая возвращает сумму всех элементов массива


//int MyResult(int list[], int lenght, int result = 0) {
//
//    for (int i = 0; i < lenght; i++)
//    {
//        result += list[i];
//    }
//    return result;
//}
//
//int main() {
//
//    int lenght = 5;
//
//    int list[] = { 5,10,12,4,6 };
//
//    cout << MyResult(list, lenght) << endl;;
//}




                     
                                               //15.07.22


// N1. Написать сфункцию PrintArray() для трехмерного массива int

//void Print3DArray(int list[2][3][3]) {
//
//    for (int x = 0; x < 2; x++)
//    {
//        for (int y = 0; y < 3; y++)
//        {
//            for (int z = 0; z < 3; z++)
//            {
//                cout << list[x][y][z] << '\t';
//            }
//            cout << endl;
//        }
//        cout << endl;
//    }
//
//}
//
//void main() {
//
//    int list[2][3][3] = {
//
//        {
//            {1,2,3},
//            {4,5,6},
//            {7,8,9}
//        },   
//
//        {
//            {10,11,12},
//            {13,14,15},
//            {16,17,18 }
//
//        }
//
//    
//    };
//
//
//    Print3DArray(list);
//}



//N2. Написать функцию, которая возвращает сумму всех элементов трехмерного массива int


//int Summ3DArry(int list[2][3][3]) {
//
//    int result = 0;
//
//    for (int x = 0; x < 2; x++)
//    {
//        for (int y = 0; y < 3; y++)
//        {
//            for (int z = 0; z < 3; z++)
//            {
//                result += list[x][y][z];
//            }
//        }
//    }
//    return result;
//
//    return 0;
//}
//
//
//int main() {
//
//    int list[2][3][3] = {
//
//        {
//            {1,2,3},
//            {1,2,3},
//            {1,2,3}
//        },
//
//        {
//            {1,2,3},
//            {1,2,3},
//            {1,2,3}
//        }
//
//    };
//
//
//    cout << Summ3DArry(list) << endl;
//}


//N3. Написать void функцию, которая выводит на экран топ 3 максимальных чисел из трехмерного массива int
//??????????????????????



                                                       //18.07.22

//N1. Написать функцию, которая будет сортировать массив из 50 int элементов,
//и в конце будет выводить в отсортированном виде список элементов на экран консоли



//void main()
//{
//	int const lenght = 20;
//
//	int elements[] = { 46,30,19,9,3,13,55,30,12,31,32,41,33,90,20,31,5,27,1,0};
//
//	int number = 1;
//
//	for (int x = 0; x < lenght; x++) {
//
//		for (int y = 0; y < lenght - 1; y++) {
//
//			if (elements[y] > elements[1 + y]) {
//
//				number = elements[y + 1];
//
//				elements[y + 1] = elements[y];
//				elements[y] = number;
//
//			}
//
//		}
//
//	}
//
//	for (int i = 0; i < 20; i++) {
//		cout << elements[i] << endl;
//	}
//
//
//
//}


                                                    //22.07.22


//N1 1) Написать Swap метод для 2 переменных


//void PrintMyNumber(int* number, int* num) {
//
//    cout << *number << endl << *num << endl;
//
//    int zubi = *number;
//    *number = *num;
//    *num = zubi;
//
//    cout << endl;
//
//    cout << *number << endl << *num << endl;
//
//}


//int main() {
//
//    int list[] = { 1,2,3,4,5,6,7 };
//
//    int* listPtr = &list[3];
//
//    int* listptr1 = &list[4];
//
//    int number = *listPtr;
//
//    *listPtr = *listptr1;
//    *listptr1 = number;
//
//    for (int i = 0; i < 7; i++)
//    {
//        cout << list[i] << endl;
//    }
//
//    int number = 100;
//    int num = 200;
//
//    PrintMyNumber(&number, &num);
//}




//N2) Написать аналог функции из python not()

//void ConditionChange(bool* condition) {
//
//    *condition = !(false);
//
//}
//
//int main() {
//
//    bool condition = false;
//
//    ConditionChange(&condition);
//
//    cout << condition << endl;
//}