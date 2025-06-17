#pragma once
#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void drive() = 0;
    virtual ~Vehicle() = default;
};
