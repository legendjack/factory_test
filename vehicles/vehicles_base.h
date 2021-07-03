#pragma once

#include <iostream>
#include <map>
#include <memory>
#include <string>

class VehiclesBase {
 public:
  VehiclesBase(){};
  virtual ~VehiclesBase() = default;

  virtual void Run() = 0;
};

class VehiclesFactory {
 public:
  VehiclesFactory(){};
  virtual ~VehiclesFactory() = default;

  static std::unique_ptr<VehiclesBase> Create(std::string name);

 protected:
  virtual std::unique_ptr<VehiclesBase> Create() const = 0;
  void RegisterFactory(std::string name, const VehiclesFactory* factory);
};

#define REGISTER_VEHICLE(ClassName)                             \
  class ClassName##Factory : public VehiclesFactory {           \
   public:                                                      \
    ClassName##Factory() { RegisterFactory(#ClassName, this); } \
    std::unique_ptr<VehiclesBase> Create() const override {     \
      return std::unique_ptr<ClassName>(new ClassName());       \
    }                                                           \
  };                                                            \
  static auto* global_ClassName##Factory = new ClassName##Factory();
