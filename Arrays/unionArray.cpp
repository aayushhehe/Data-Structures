#include <bits/stdc++.h>
using namespace std;
//brute force approach
int main(){
    int n = 5;
    int m = 6;
    set<int> val;
    int a[n] = {1,2,3,4,5};
    int b[m] = {1,2,3,6,7,8};

    for(int i = 0;i<n;i++){
        val.insert(a[i]);
    }
    for(int i = 0;i<m;i++){
        val.insert(b[i]);
    }
    int size = val.size();
    int arr[size];

    int index = 0;
    for (int element : val) {
        arr[index++] = element;
    }

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}