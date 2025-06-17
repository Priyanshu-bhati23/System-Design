#include "AbstractFactoryPattern/VehicleFactory.h"

#include <iostream>
using namespace std;
int main() {
    VehicleFactory* petrolFactory = new PetrolVehicleFactory();
    Vehicle* petrolCar = petrolFactory->createCar();
    Vehicle* petrolBike = petrolFactory->createBike();

    petrolCar->drive();
    petrolBike->drive();

    VehicleFactory* electricFactory = new ElectricVehicleFactory();
    Vehicle* electricCar = electricFactory->createCar();
    Vehicle* electricBike = electricFactory->createBike();

    electricCar->drive();
    electricBike->drive();

    delete petrolCar;
    delete petrolBike;
    delete petrolFactory;
    delete electricCar;
    delete electricBike;
    delete electricFactory;

    return 0;
}



// // The Abstract Factory Pattern is a creational design pattern that provides an interface for creating families of related or dependent objects without specifying their concrete classes.

// You want to create related products (e.g., Car and Bike) that belong to a family (e.g., Electric or Petrol).

// You want to decouple your code from the specific classes of the products.

// You want to easily switch families of objects without changing the main logic.