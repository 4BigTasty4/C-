#include <iostream>


using namespace std;


enum GENDERS {

    MALE,
    FEMALE,
    OTHER,
    UNKNOWN

};


struct HumanInfo
{
    char* name;
    int* age;
    GENDERS gender;
    
};


void ShowHumanInfo(HumanInfo personInfo) {

    if (personInfo.name == nullptr)
    {
        cout << "Name: " << "Unknown" << endl;
    }
    else
        cout << "Name: " << personInfo.name << endl;
    cout << "Age: " << *(personInfo.age) << endl;
    cout << "Gender: " << personInfo.gender << endl;

}


void ClearHumanInfo(HumanInfo personInfo) {

    personInfo.name = nullptr;
    *(personInfo.age) = -1;
    personInfo.gender = GENDERS::UNKNOWN;

}


void RandomHumanInfo(HumanInfo personInfo) {

    srand(time(0));

    cout << "Age: " << (*(personInfo.age) = rand() % 100) << endl;
    cout << "Gender: " << (personInfo.gender = GENDERS(rand() % 4))<< endl;

}


int main()
{
    
    HumanInfo personInfo = HumanInfo();

    personInfo.age = new int(20);
    personInfo.name = (char*)"Abbas";
    personInfo.gender = GENDERS::MALE;

    //ClearHumanInfo(personInfo);

    RandomHumanInfo(personInfo);

    //ShowHumanInfo(personInfo);
}


