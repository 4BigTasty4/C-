#pragma once

#include <iostream>
#include "Enums.h"

using namespace std;

struct UserInfo {
	char name[15]{};
	char surname[15]{};

	unsigned short age;
	GENDERS gender;
	double salary;
};

UserInfo CreateNewUser() {

	UserInfo newUser = UserInfo();

	cout << "Name: ", cin >> newUser.name;
	cout << "Surname: ", cin >> newUser.surname;
	cout << "Age: ", cin >> newUser.age;
	cout << "Salary: ", cin >> newUser.salary;

	return newUser;
}
