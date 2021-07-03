#pragma once

#include <iostream>
#include "vehicles_base.h"

class Car : public VehiclesBase {
 public:
  Car();
  ~Car();
  void Run();
};
