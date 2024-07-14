#include <iostream>
using namespace std; 

void linearSearch(int arr[], int key, int size){
    for(int i=0; i<size; i++){
        if (arr[i]==key){
            cout<<i;
            break;
        } 
    }
}

void displayArray(int arr[], int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i];
    }
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    // displayArray(arr,size);
    linearSearch(arr, 4, size);

    return 0;
}