#include <iostream>

using namespace std;

int main()
{

for(int i=0;i<=10;i++){

    cout<<i<<endl;
    if(i==5){
        break; //out of loop
    }

}

cout<<endl;

for(int i=0;i<=10;i++){

    
    if(i==5){
        break; //out of loop
    }
    cout<<i<<endl;

}

int i=10;

while(i>0){
    cout<<i<<endl;
    i--;
}


int a;
if(cin>>a){
    cout<<"helllo";
}


return 0;
}
