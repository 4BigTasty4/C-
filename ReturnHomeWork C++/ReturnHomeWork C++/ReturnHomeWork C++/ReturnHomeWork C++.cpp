#include <iostream>

using namespace std;

int main()
{
    
                                                // 17.06.2022


//N 1
//вводит количество дней: 370
//необходимо вычислить лет и дней: 1 год 5 дней


    /*cout << "Hello User" << endl;
    cout << "Enters The Number of Days: ";

    int day;
    int resultYear;
    int resultDay;

    cin >> day;

    resultYear = day / 365;
    resultDay = day % 365;

    cout << "Year: " << resultYear << endl << "Day: " << resultDay << endl;*/


//N 2
//вводит количество деньги в следующем формате: 1235.34
//необходимо вывести на экран следующего типа сообщение: 1235 usd 34 cent


    /*cout << "Hello User" << endl;
    cout << "Input Money: ";

    float money;
    float resultUsd;
    float resultCent;
    float result;

    cin >> money;

    result = money;
    resultUsd = int(money) / 1;
    resultCent = (result - int(money)) * 100;

    cout << "Usd: " << resultUsd << endl << "Cent: " << resultCent << endl;*/



//N 3
//вводит количество денег в azn: 170
//возвращается количество денег в usd: 100


    /*cout << "Hello User" << endl;
    cout << "Enters the Amount of Money in AZN : ";

    float money;
    float result;

    cin >> money;

    result = money * 1.7;

    cout << "Your Money In Azn: " << result << endl;*/



                                                    // 20.06.2022




//N 1.
//пользователь вводит 3 числа
//на экран выходит наибольшее из них

    /*cout << "Hello World" << endl;

    int First;
    int Second;
    int Third;

    cout << "Input N1: ";
    cin >> First;
    cout << "Input N2: ";
    cin >> Second;
    cout << "Input N3: ";
    cin >> Third;

    if (First > Second && First > Third) {

        cout << "Big Number: " << First << endl;

    }

    else if (Second > First && Second > Third) {

        cout << "Big Number: " << Second << endl;

    }

    else if (Third > First && Third > Second) {

        cout << "Big Number: " << Third << endl;

    }

    else {

        cout << "ERROE" << endl;

    }*/




//N 2.
//пользователь вводит 3 числа
//на экран выходит среднее арифметическое


   /* cout << "Hello World" << endl;

    int First;
    int Second;
    int Third;
    int result;

    cout << "Input N1: ";
    cin >> First;
    cout << "Input N2: ";
    cin >> Second;
    cout << "Input N3: ";
    cin >> Third;


    if (true) {

        result = (First + Second + Third) / 3;

        cout << "Your Number: " << result << endl;

    }

    else {

        cout << "ERROR" << endl;

    }*/




//N 3.
//пользователь вводит число  и процент
//на экран выходит процент от числа


    /*cout << "Hello World" << endl;

    double number;
    double procent;
    double result;

    cout << "Input Your Number: ";
    cin >> number;
    cout << "Input Your Procent: ";
    cin >> procent;
    
    if (number > 0 && percent > 0) {

        result = (number * procent) / 100;

        cout << "Your Number: " << result << endl;

    }

    else {

        cout << "ERROR" << endl;

    }*/




//N 4.
//пользователь вводит символ
//Необходимо проверить, является ли символ английской буквой


    /*cout << "Hello World" << endl;

    char symbol;

    cout << "Input Symbol: ";
    cin >> symbol;

    if (char(symbol) >= 161 || char(symbol) >= 186) {

        cout << "Right " << "Your Symbol: " << symbol << endl;

    }

    else if (char(symbol) >= 65 || char(symbol) >= 90) {

        cout << "Right " << "Your Symbol: " << symbol << endl;

    }

    else {

        cout << "ERROR" << endl;

    }*/






//N 5.
//пользователь вводит символ
//Необходимо проверить, является ли символ числом



    //cout << "Hello World" << endl;

    //char symbol;

    //cout << "Input Symbol: ";
    //cin >> symbol;

    //if (char(symbol) <= 48 || char(symbol) <= 57) {

    //    cout << "Right " << "Your Symbol: " << symbol << endl;

    //}

    //else {

    //    cout << "ERROR" << endl;

    //}





                                                        // 24.06.2022



//N 1
//пользователь вводит диапазон значений(start, end)
//пользователь вводит число, которое он загадал
//
//программа последовательно предлагает свои числа
//пользователь отвечает(загаданное число больше, меньше или же равно)
//
//в конечном итоге программа угадывает число







                                                          // 27.06.2022




//N 1.
//Напишите программу, которая вычисляет сумму целых
//чисел от а до 500 (значение a вводится с клавиатуры)
//(если а будет больше 500 - перевернуть цикл)



    /*cout << "Hello World" << endl;

    int number;

    cout << "Input Number: ";
    cin >> number;

    int result = 0;

        for (int i = number; i <= 500; i++)
        {

            result += i;

            cout << result << endl;

        }*/
         
    

   
//N 2.
//Напишите программу, которая запрашивает два целых числа 
//x и y, после чего вычисляет и выводит значение x в степени y



    /*cout << "Hello World" << endl;

    int x;
    int y;

    cout << "Input Number: ";
    cin >> x;
    cout << "Input Degree: ";
    cin >> y;

    int result = 1;

    for (int i = 1; i <= y; i++)
    {
        result *= x;
    }

    cout << result << endl;*/



//N 3.
//Найти произведение всех чётных чисел от a до b (значение 
//a и b вводится с клавиатуры



   /* cout << "Hello World" << endl;

    int a;
    int b;

    cout << "Input Number A: ";
    cin >> a;
    cout << "Input Number B: ";
    cin >> b;

    int result = 1;

    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0) {
           result *= i;
        }

    }

    cout << result << endl;*/





                                                    // 01.07.2022





}
