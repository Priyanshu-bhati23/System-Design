#include "CarFactory.h"

int main() {
    Car* sedan = CarFactory::createCar(SEDAN);
    Car* suv = CarFactory::createCar(SUV_TYPE);

    sedan->drive();
    suv->drive();

    delete sedan;
    delete suv;

    return 0;
}


// d provides a centralized way to instantiate objects based on some input or condition.

// To avoid tight coupling between classes and their dependencies.

// To follow Open/Closed Principle (open for extension, closed for modification).

// When you have multiple subclasses and want to decide which one to create at runtime.