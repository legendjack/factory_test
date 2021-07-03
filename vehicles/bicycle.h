#pragma once

#include <iostream>
#include "vehicles_base.h"

class Bicycle : public VehiclesBase {
 public:
  Bicycle();
  ~Bicycle();
  void Run();
};