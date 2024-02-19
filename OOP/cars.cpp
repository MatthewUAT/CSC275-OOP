// libaries and files used in this .cpp 
#include <iostream>
#include <string>
#include "automobile.h"
#include "cars.h"
using namespace std;

cars::cars() {}
// sets the info to be entered 
cars::cars(string Name, int Model, int Year, int Mileage, string con) : automobile(Name, Model, Year, Mileage)
{
	condition = con;
}
// sets up the display for this .cpp 
void cars::display()
{
	automobile::display();
	cout << "Condition of vehicle = " << condition << endl;
}