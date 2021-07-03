#include "motorcycle.h"
#include "log.h"

Motorcycle::Motorcycle() { LOG("Motorcycle()"); }
Motorcycle::~Motorcycle() { LOG("~Motorcycle()"); }
void Motorcycle::Run() { LOG("Run()"); }

REGISTER_VEHICLE(Motorcycle);