#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle
{
private:
	int towingCapacity;
public:
	Truck();
	Truck(string, int, int);
	void setTowingCapacity(int);
	int getTowingCapacity();
	void displayInfo();
};

#endif
