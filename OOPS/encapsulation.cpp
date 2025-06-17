#include<bits/stdc++.h>
using namespace std;
class student{
 //attributes

 public:
    int id;
    int age;
    string name;
    int rollno;

private:
    int * cgpa;
    string gf;

public: 
    void setGpa(float a){
        //layer of authentication
         *this->cgpa=a;
    }

    float getGpa(){
        return  *this->cgpa;
    }

    void setgf(string a){
        //layer of authentication
         this->gf=a;
    }

    string  getgf(){
        return  this->gf;
    }

//behaviour/methods/func

//ctor: defualt:ctpr

// student()
// {
//     cout<<"Student default ctpr called"<<endl;
// }


//ptr ctor

student(int id,int age,string name,int rollno,float cgpa,string gf){

    cout<<"Student ptr ctro called"<<endl;
    this->id=id;
    this->age=age;
    this->name=name;
    this->rollno=rollno;
    this->cgpa = new int(cgpa);
     this->gf=gf;
}


//copy ctor

student(const student &srcobj){
     cout<<"Student copy ctro called"<<endl;
    this->id=srcobj.id;
    this->age=srcobj.age;
    this->name=srcobj.name;
    this->rollno=srcobj.rollno;
    this->gf=srcobj.gf;
}
void study(){
    cout<<"Studying"<<this->name<<endl;
}
void sleep(){
   cout<<this->name<<"Sleeping"<<endl;

}

void bunk(){
    cout<<this->name<<"bunking"<<endl;
}




~student()
{
    cout<<"Student default dtro called"<<endl;
}

private:
void gfcahtting(){
    cout<<this->name<<"chatting with gf"<<endl;
}

};


int main(){
   
    // student a;
    // a.id=1;
    // a.age=2;
    // a.name="priayanshu";
    // a.study();


    // student A (1,15,"priaynshu",6);
    // student B (1,15,"priaynshuBH",6);
    // student C (1,15,"priaynshuBHATI",6);

    // A.bunk();
    // B.study();
    // C.sleep();


    //    student D=A;
    //    D.study();
    //    D.sleep();
    //    D.bunk();
    //    D.study();


       //Dynameic alloctaion or studnet ptr

    //   student *A=new student(1,14,"babar",8,9.8);

    //   cout<<A->name<<endl;
    //   cout<<A->age<<endl;
    //   cout<<A->id<<endl;
    //   cout<<A->rollno<<endl;

    //   A->study();

      student A(1,12,"ranu",5,7.8,"menu");

      cout<<A.age<<endl;
     

      A.setGpa(7.8);

      cout<<A.getGpa()<<endl;
  A.setgf("meenu");
  cout<<A.getgf()<<endl;

 
    

      


    return 0;
}