#pragma once
#include "PetrolCar.h"
#include "PetrolBike.h"
#include "ElectricCar.h"
#include "ElectricBike.h"

class VehicleFactory {
public:
    virtual Vehicle* createCar() = 0;
    virtual Vehicle* createBike() = 0;
    virtual ~VehicleFactory() = default;
};

class PetrolVehicleFactory : public VehicleFactory {
public:
    Vehicle* createCar() override {
        return new PetrolCar();
    }
    Vehicle* createBike() override {
        return new PetrolBike();
    }
};

class ElectricVehicleFactory : public VehicleFactory {
public:
    Vehicle* createCar() override {
        return new ElectricCar();
    }
    Vehicle* createBike() override {
        return new ElectricBike();
    }
};
