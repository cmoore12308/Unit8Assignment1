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
}

void Car::setDoors(int doorNumber)
{
	numberOfDoors = doorNumber;
}

int Car::getDoors()
{
	return numberOfDoors;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Number of doors: " << getDoors() << endl;
}