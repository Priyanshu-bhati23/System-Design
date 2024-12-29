#include<iostream>

using namespace std;

int main(){

    int budget;
    cout<<"Enter your budget:"<<endl;

    //input

    cin>>budget;

    if(budget>2000000){
        cout<<"You can buy scoropio"<<endl;
    }else if(500<budget<1000){
        cout<<"Bhai taxi lele"<<endl;
    }else{
        cout<<"GHar par beth jaa"<<endl;
    }


//nested ifs


int height;
int weight;

cin>>height;


if (height>20){
    cin>>weight;

    if (weight>200){
        cout<<"GOOD BMI";
        }
}

return 0;
}