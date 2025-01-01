#include<iostream>
using namespace std;




// void printArray(int arr[],int size){
//     cout<<"entering  the loop";

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     arr[2]=3;
//       for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     cout<<"exiting the loop";

// }

void revarray(int arr[],int size){

    int newarr[size];

    for(int i=size-1;i>=0;i--){

        newarr[size-1-i]=arr[i];

    }
     for(int i=0;i<size;i++){
        cout<<newarr[i]<<endl;
    }


}

int main(){

    int brr[10]={2,3,4,5,6,5,6,7,2,3};

    // printArray(brr,10);

    //  for(int i=0;i<10;i++){
    //     cout<<brr[i]<<endl;
    // }
     
     revarray(brr,10);

     int arr[3][4]={{10,20,30,40},{10,20,30,40},{10,20,30,40}};

     //printing
     int row=3;
     int col=4;

     for(int row_index=0;row_index<=row-1;row_index++){
        for(int col_index=0;col_index<=col-1;col_index++){
            cout<<arr[row_index][col_index]<<" ";
        }
        cout<<endl;

     }

    
}