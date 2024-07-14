#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int a[n] = {1,2,4,5};
    for(int i = 0; i<n; i++){
        if(a[i] != i+1){
            cout<<i+1;
            break;
        }
    }
}