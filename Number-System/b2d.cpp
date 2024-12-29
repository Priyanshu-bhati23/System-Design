#include<iostream>
#include<cmath>
using namespace std;


int decimalTobinaryMethod1(int n){
    //Divison Method
    int binaryno=0;
    int i=0;

    while(n>0){
        int bit=n%2;
        binaryno=bit*pow(10,i++)+binaryno;
        n=n/2;
        

    }
    return binaryno;
}


//BITWISE METHOD
int decimalTobinaryMethod2(int n){
    //Bitwise METHOD
    int binaryno=0;
    int i=0;

    while(n>0){
        int bit=(n & 1);
        binaryno=bit*pow(10,i++)+binaryno;
        n=n>>1;
        

    }
    return binaryno;
}


int binarytodecimal(int n){
    int decimal=0;
    int i=0;

    while(n>0){
        int bit=n%10;
        decimal=decimal+bit*pow(2,i++);
        n=n/10;

    }
    return decimal;


    }


int main(){

    int n;
    cin>>n;
    int binary=decimalTobinaryMethod1(n);
    cout<<binary<<endl;

     int binary2=decimalTobinaryMethod2(n);
    cout<<binary2<<endl;

    int binaryno;
    cin>>binaryno;
    cout<<binarytodecimal(binaryno)<<endl;

     int binaryno2;
    cin>>binaryno2;
    cout<<binarytodecimal(binaryno2)<<endl;


    return 0;
}