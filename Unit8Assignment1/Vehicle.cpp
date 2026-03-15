#include <iostream>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle()
{
	manufacturer = "";
	yearBuilt = 0;
} // constructor to default member variable manufacturer to blank and yearBuilt to 0

Vehicle::Vehicle(string manufacturerTwo, int yearBuiltTwo)
{
	manufacturer = manufacturerTwo;
	yearBuilt = yearBuiltTwo;
} // constructor to set member variables equal to variables passed in parameters. Chooses which of these two constructors to use based on whether Vehicle data type class is made with parameters

void Vehicle::setManufacturer(string manufacturerTwo)
{
	manufacturer = manufacturerTwo;
} // sets manufacturer equal to the value passed as a parameter

void Vehicle::setYearBuilt(int yearBuiltTwo)
{
	yearBuilt = yearBuiltTwo;
} // sets yearBuilt equal to the value passed as a paramater

string Vehicle::getManufacturer()
{
	return manufacturer;
} // returns the value held in member variable manufacturer

int Vehicle::getYearBuilt()
{
	return yearBuilt;
} // returns the value held in member variable yearBuilt

void Vehicle::displayInfo()
{
	cout << "Vehicle Info:" << endl;
	cout << "Manufacturer: " << getManufacturer() << endl;
	cout << "Year Built: " << getYearBuilt() << endl;
} // displays vehicle information by calling the get functions for the member variables