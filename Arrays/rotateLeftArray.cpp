#include <bits/stdc++.h>
using namespace std;
//brute force approach
int main(){
    int n = 5;
    int a[n] = {1,2,3,4,5};
    int temp = a[0];
    for(int i = 0;i<n-1;i++){
        a[i] = a[i+1];
    }
    a[n-1] = temp;
    for(int i = 0 ; i<n ; i++){
        cout<<a[i];
    }
}