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
	Truck truckOne; // variables to hold vehicle information

	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	vehicleOne.setManufacturer(manufacturer);

	cout << "Enter the year built: ";
	cin >> yearBuilt;
	vehicleOne.setYearBuilt(yearBuilt); // gathers user input on vehicle info, sets vehicle info, then displays vehicle info

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
	carOne.setDoors(numberOfDoors); // gathers user input on car info, sets car info, then displays car info

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

	truckOne.displayInfo(); // gathers user input on truck information, sets truck info, then displays truck info

	return 0;
}