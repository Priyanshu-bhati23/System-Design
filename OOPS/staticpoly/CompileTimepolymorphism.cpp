#include<bits/stdc++.h>
using namespace std;


class Add{
public:

    int sum(int x,int y){
        return x+y;
    }
    int sum(int x,int y,int z){
        return x+y+z;
    }

    //double add

    double sum(double x,double y){
        return x+y;
    }
};



int main(){


    int x=5;
    int y=5;
    
    Add A;
    cout<<A.sum(x,y);
    double f=5;
    double g=5;
    cout<<A.sum(f,g);
}