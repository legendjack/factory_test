#include "car.h"
#include "log.h"

Car::Car() { LOG("Car()"); }
Car::~Car() { LOG("~Car()"); }
void Car::Run() { LOG("Run()"); }

REGISTER_VEHICLE(Car);