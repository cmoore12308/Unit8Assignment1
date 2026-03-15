#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int yearBuilt;
public: 
	Vehicle();
	Vehicle(string, int);

	void setManufacturer(string);
	void setYearBuilt(int);
	string getManufacturer();
	int getYearBuilt();

	void displayInfo();
};

#endif
