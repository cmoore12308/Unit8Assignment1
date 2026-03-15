#include "Truck.h"
#include <iostream>

using namespace std;

Truck::Truck() : Vehicle()
{
	towingCapacity = 0;
}

Truck::Truck(string manufacturerTwo, int yearBuiltTwo, int towCap) : Vehicle(manufacturerTwo, yearBuiltTwo)
{
	towingCapacity = towCap;
} // these two function definitions overload the Truck constructor depending on the arguments and assign member variable values

void Truck::setTowingCapacity(int towCap)
{
	towingCapacity = towCap;
} // sets towingCapacity equal to the variable passed as reference

int Truck::getTowingCapacity()
{
	return towingCapacity;
} // returns the int value held in towing capacity

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << getTowingCapacity() << endl;
} // displays vehicle info by calling vehicle display info inherrited function, then displays towing capacity info