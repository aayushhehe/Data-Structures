#include <bits/stdc++.h>
using namespace std;
//brute force approach
int main(){
    int n = 5;
    int a[n] = {1,2,3,4,5};
    for(int i = 1 ; i<=3;i++){
        int temp = a[0];
        for(int j = 0;j<n-1;j++){
            a[j] = a[j+1];
        }
        a[n-1] = temp;
    }
    
    for(int i = 0 ; i<n ; i++){
        cout<<a[i];
    }
}