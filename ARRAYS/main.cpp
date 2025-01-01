#include<iostream>

using namespace std;

int main(){
    //declaration
    // int arr[50];

    //initialisation
    int brr[10]={2,3,4,5,6,5,6,7};

    //accesing
    for(int i=0;i<10;i++){
        cout<<brr[i]<<endl;
    }


int size;
cout<<"Enter sixe of array "<<endl;
cin>>size;

int arr[size];

for (int i=0;i<size;i++){
    cout<<"Enter the "<<i<<"eleemnt of array"<<endl;
    cin>>arr[i];

}

 for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }

cout<<endl;

int sum=0;
for(int i=0;i<size;i++){
    sum=arr[i]+sum;
}
cout<<sum;






    return 0;
}