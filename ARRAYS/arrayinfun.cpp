#include<iostream>
using namespace std;




void printArray(int arr[],int size){
    cout<<"entering  the loop";

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    arr[2]=3;
      for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"exiting the loop";

}

int main(){

    int brr[10]={2,3,4,5,6,5,6,7};

    printArray(brr,10);

     for(int i=0;i<10;i++){
        cout<<brr[i]<<endl;
    }

    
}