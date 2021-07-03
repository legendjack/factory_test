#pragma once

#include <iostream>
#include "vehicles_base.h"

class Motorcycle : public VehiclesBase {
 public:
  Motorcycle();
  ~Motorcycle();
  void Run();
};