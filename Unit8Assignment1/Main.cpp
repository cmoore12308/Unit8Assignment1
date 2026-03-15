#include <string>
#include <iostream>
#include "Truck.h"
#include "Car.h"
#include "Vehicle.h"

using namespace std;

int main()
{
	string manufacturer;
	int yearBuilt;
	int numberOfDoors;
	int towingCapacity;

	Vehicle vehicleOne;
	Car carOne;
	Truck truckOne;

	cout << "Vehicle:" << endl << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	vehicleOne.setManufacturer(manufacturer);

	cout << "Enter the year built: ";
	cin >> yearBuilt;
	vehicleOne.setYearBuilt(yearBuilt);

	vehicleOne.displayInfo();

	cin.ignore(); // ignores leftover enter character

	cout << endl << "Car: " << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	carOne.setManufacturer(manufacturer);

	cout << "Enter the year built: ";
	cin >> yearBuilt;
	carOne.setYearBuilt(yearBuilt);

	cout << "Enter the number of doors: ";
	cin >> numberOfDoors;
	carOne.setDoors(numberOfDoors);

	carOne.displayInfo();

	cin.ignore(); // ignores leftover enter character

	cout << endl << "Truck: " << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	truckOne.setManufacturer(manufacturer);

	cout << "Enter the year built: ";
	cin >> yearBuilt;
	truckOne.setYearBuilt(yearBuilt);

	cout << "Enter the towing capacity: ";
	cin >> towingCapacity;
	truckOne.setTowingCapacity(towingCapacity);

	truckOne.displayInfo();

	return 0;
}