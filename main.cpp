#include <iostream>
using namespace std;
//program get array (size by choice) of numbers, receive the even numbers

int main() {
    int size , count=0;
    int *arr = NULL , *tempArr=NULL;

    cout<<"enter size of array \n";
    cin>> size;

    tempArr= new int[size];


    if (tempArr==NULL){
        cout<<"error! \n";
        return 0;
    }

    cout<<"enter values into array \n";

    for (int i= 0 ; i<size ; ++i){
       cin>> tempArr[i];
        if (tempArr [i] %2 == 0){
            count++;
        }
    }

    arr = new int[count];
    int arr_index = 0;
    for (int i = 0 ; i<size ; ++i){
        if (tempArr[i]%2==0){
            arr[arr_index] =tempArr[i];
            arr_index++;
        }
    }

    for (int i = 0 ; i<count ; ++i){
        cout<<arr[i]<<"\t";
    }

    return 0;
}
