#if !defined(BIRD_H)
#define BIRD_H
#include <bits/stdc++.h>
using namespace std;


class Bird{
public:
    virtual void eat()=0;
    virtual void fly()=0;
    //clases that inherits this class has to implemnt pure vrtual functions
};


class sparrow: public Bird{
    public:
    void eat() override{
        cout<<"sparraow is eating";
    }
    void fly() override{
        cout<<"sparraow is flying";
    }
};


class Eagle: public Bird{
    public:
    void eat() override{
        cout<<"eagle is eating";
    }
    void fly() override{
        cout<<"eagle is flying";
    }
};

  

#endif // BIRD_H
