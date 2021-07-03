#include "log.h"
#include "vehicles_run.h"

int main(int argc, char** argv) {
  LOG("main start");

  VehiclesRun vehicles_run;
  vehicles_run.Run();

  return 0;
}