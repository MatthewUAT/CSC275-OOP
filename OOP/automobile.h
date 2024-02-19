// libaries used in this header file
#pragma once
#include <string>
using namespace std;
// creates the class
class automobile
{
	// private user can not change
private:
	string name;
	int model;
	int year;
	int mileage;

	// public the user can change
public:
	automobile();
	automobile(string Name, int Model, int Year, int Mileage);
	void display();

};