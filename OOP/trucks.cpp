// libaries and files used in this .cpp 
#include <iostream>
#include <string>
#include "automobile.h"
#include "trucks.h"
using namespace std;

trucks::trucks() {}
// sets the info to be entered 
trucks::trucks(string Name, int Model, int Year, int Mileage, string con) : automobile(Name,Model,Year,Mileage)
{
	condition = con;
}
// sets up the display for this .cpp 
void trucks::display()
{
	automobile::display();
	cout << "Condition of vehicle = " << condition << endl;
}