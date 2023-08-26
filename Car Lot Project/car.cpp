// Author: Evans Efiong 
#include "car.h"
#include <string>
#include <iostream> 
using namespace std;


// CONSTRUCTOR 
Car::Car(int userID, string userMake, string userModel, int userYear, string userCondition) { id = userID; make = userMake; model = userModel; year = userYear; condition = userCondition; rented = false; }

// GET ID FUNCTION
int Car::getID() { return id; }

// GET MAKE FUNCTION
string Car::getMake() { return make; }

// GET MODEL FUNCITON
string Car::getModel() { return model; }

// GET YEAR FUNCTION
int Car::getYear() { return year; }

// GET CONDITION FUNCTION
string Car::getCondition() { return condition; }

// IS RENTED FUNCTION
bool Car::isRented() { return rented; }

// SET CONDTITION FUCNTION
void Car::setCondition(string userCondition) { condition = userCondition; }

void Car::toggleRented() {
	if (rented == true) {
		rented = false;
	}
	else {
		rented = true;
	}
}

void Car::displayCar() {
	if (rented == false) {
		cout << "ID: " << id << ", " << make << " " << model << ", " << year << ", " << condition << ", " << "is available" << endl;
	}
	else
	{
		cout << "ID: " << id << ", " << make << " " << model << ", " << year << ", " << condition << ", " << "is not available" << endl;
	}
}


