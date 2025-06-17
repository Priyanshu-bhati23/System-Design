#pragma once
#include "Car.h"
#include "Sedan.h"
#include "SUV.h"

enum CarType { SEDAN, SUV_TYPE };  // Can't reuse `SUV` as an enum name

class CarFactory {
public:
    static Car* createCar(CarType type) {
        if (type == SEDAN)
            return new Sedan();
        else if (type == SUV_TYPE)
            return new SUV();
        return nullptr;
    }
};
