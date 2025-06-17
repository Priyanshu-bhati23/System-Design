#include<bits/stdc++.h>
using namespace std;


class Complex{

    public:
    int real;
    int imag;

    Complex(){
        real=imag=-1;

    }

        Complex(int r,int i): real(r),imag(i){

        }

            Complex operator+(const Complex&obj){
                Complex temp;
                temp.real=this->real+obj.real;
                temp.imag=this->imag+obj.imag;

                return temp;
            }


        void print(){
            printf("[%d +i%d]",this->real,this->imag);
        }
};

int main(){
    Complex A(2,5);
    A.print();
    Complex B(2,7);
    B.print();

    Complex C=A+B;
    C.print();
}

