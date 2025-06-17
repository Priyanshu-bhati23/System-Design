#pragma once
#include <iostream>
using namespace std;

class Car {
public:
    virtual void drive() = 0;
    virtual ~Car() = default;
};
