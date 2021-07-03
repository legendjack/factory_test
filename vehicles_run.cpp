#include "vehicles_run.h"
#include "log.h"

#include <iostream>
#include <set>

VehiclesRun::VehiclesRun() {
  const std::set<std::string> vehicles_categroy_name_set = {"Car", "Motorcycle",
                                                            "Bicycle"};
  for (const auto& vehicles_categroy_name : vehicles_categroy_name_set) {
    vehicles_set_.insert(VehiclesFactory::Create(vehicles_categroy_name));
  }
}

VehiclesRun::~VehiclesRun() {}

void VehiclesRun::Run() {
  LOG("Run()");
  for (const auto& vehicle : vehicles_set_) {
    vehicle->Run();
  }
}