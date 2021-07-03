#include "bicycle.h"
#include "log.h"

Bicycle::Bicycle() { LOG("Bicycle()"); }
Bicycle::~Bicycle() { LOG("~Bicycle()"); }
void Bicycle::Run() { LOG("Run()"); }

REGISTER_VEHICLE(Bicycle);