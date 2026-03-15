#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle
{
private:
	int numberOfDoors;
public: 
	Car();
	Car(string, int, int);

	void setDoors(int);
	int getDoors();
	void displayInfo();
};
#endif