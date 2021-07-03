#pragma once

#include <stdlib.h>
#include <memory>
#include <set>

#include "vehicles/vehicles_base.h"

class VehiclesRun {
 public:
  VehiclesRun();
  ~VehiclesRun();

  void Run();

 private:
  std::set<std::unique_ptr<VehiclesBase>> vehicles_set_;
};