#include <bits/stdc++.h>
using namespace std;

// Base class
class Shape {
public:
    // Virtual for late binding (polymorphism)
    virtual void draw() {
        cout << "Generic drawing" << endl;
    }

    virtual ~Shape() {} // Always add virtual destructor for base classes
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Circle drawing" << endl;
    }

    void onlyCircleFeature() {
        cout << "Circle-specific feature\n";
    }
};

// Derived class: Triangle
class Traingle : public Shape {
public:
    void draw() override {
        cout << "Triangle drawing" << endl;
    }
};

// Function using upcasting
void ShapeDrawing(Shape *s) {
    s->draw(); // Late binding: calls derived class version
}

int main() {
    Circle C;
    Traingle T;

    // ✅ Upcasting
    ShapeDrawing(&C); // Output: Circle drawing
    ShapeDrawing(&T); // Output: Triangle drawing

    // ✅ Safe Downcasting using dynamic_cast
    Shape* s2 = new Circle(); // s2 is pointing to a Circle object

    Circle* c2 = dynamic_cast<Circle*>(s2); // Safe downcast
    if (c2) {
        c2->draw();               // Output: Circle drawing
        c2->onlyCircleFeature();  // Output: Circle-specific feature
    } else {
        cout << "Downcasting failed!" << endl;
    }

    // ❌ Unsafe downcasting (bad example - don't do this)
    Shape* s3 = new Shape(); // Plain Shape object
    Circle* c3 = dynamic_cast<Circle*>(s3); // Invalid downcast

    if (c3) {
        c3->draw(); // This won't run
    } else {
        cout << "Invalid downcast from Shape to Circle!" << endl;
    }

    // Clean up
    delete s2;
    delete s3;

    return 0;
}
