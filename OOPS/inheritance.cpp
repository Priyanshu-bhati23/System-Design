#include<bits/stdc++.h>
using namespace std;

// class Derivedclass: accessSpecifier BaseClass{
  //Class members
// }



class Vehicle{

protected:
    string name;
    string model;
    int noOfTyres;

public:
    Vehicle(string name,string model,int noOfTyres){
        this->name=name;
        this->model=model;
        this->noOfTyres=noOfTyres;
    }

    public:
    void start_engine(){
        cout<<"Enginr is starting"<<name<<" "<<model<<endl;
    }

     void stop_engine(){
        cout<<"Enginr is stoping"<<name<<" "<<model<<endl;
    }



};


class Car: public Vehicle
{
 public:

 int noOfDoor;
 string tramsmissiontype;

  Car(string _name,string _model,int _noOfTyres,int noOfDoor,string tramsmissiontype): Vehicle(_name,_model,_noOfTyres)
  {
        this->noOfDoor=noOfDoor;
        this->tramsmissiontype=tramsmissiontype;
    }


 void startAC(){
     cout<<"AC has started"<<name<<endl;
 }
};


class Motorcycle: public Vehicle{
protected:
string handlebarstyle;
string suspensiontypw;


Motorcycle(string _name,string _model,int _noOfTyres, string _handlebarstyle,string _suspensiontypw): Vehicle(_name,_model,_noOfTyres)
{
 this->handlebarstyle=_handlebarstyle;
 this->suspensiontypw= _suspensiontypw;

}

void whhwlie(){
    cout<<"wheelie is happening"<<name<<endl;
}
};



int main(){

    Car A("Maruti : 800","LXI",4,4,"Manual");
    A.start_engine();
    A.stop_engine();

    Motorcycle M("BMW","VXI",2,"U","Hard");

    return 0;
}