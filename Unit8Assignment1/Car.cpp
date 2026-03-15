#include "Car.h"
#include <iostream>

using namespace std;

Car::Car() : Vehicle()
{
	numberOfDoors = 0;
}

Car::Car(string manufacturerTwo, int yearBuiltTwo, int doorNumber) : Vehicle(manufacturerTwo, yearBuiltTwo)
{
	numberOfDoors = doorNumber;
} // Car constructor overload dependent on argument values

void Car::setDoors(int doorNumber)
{
	numberOfDoors = doorNumber;
} // sets numberOfDoors equal to parameter value

int Car::getDoors()
{
	return numberOfDoors;
} // return numberOfDoors as integer value

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Number of doors: " << getDoors() << endl;
} // displays vehicle info by calling displayInfo base function, then displays number of doors by calling getDoors function