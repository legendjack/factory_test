#include "vehicles_base.h"
#include "log.h"

#include <assert.h>

// 声明全局的静态map，用于保存所有通过宏定义得到的静态VehiclesFactory指针global_ClassName##Factory
std::map<std::string, const VehiclesFactory*>* GetVehiclesFactories() {
  static auto* factories = new std::map<std::string, const VehiclesFactory*>();
  return factories;
}

void VehiclesFactory::RegisterFactory(std::string name,
                                      const VehiclesFactory* factory) {
  LOG(name + "Factory");
  auto it = GetVehiclesFactories()->insert(
      std::pair<std::string, const VehiclesFactory*>(name, factory));
  assert(it.second);
}

// static
std::unique_ptr<VehiclesBase> VehiclesFactory::Create(std::string name) {
  auto it = GetVehiclesFactories()->find(name);
  assert(it != GetVehiclesFactories()->end());
  return it->second->Create();
}
