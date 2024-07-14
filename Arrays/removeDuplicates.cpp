#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int a[n]={1,2,2,3,4};

    set<int> val;

    for(int i = 0;i<n;i++){
        val.insert(a[i]);
    }

    int index = 0;
    int newArray[val.size()];

    for(int ele : val){
        newArray[index++] = ele;
    }

    int size = sizeof(newArray) / sizeof(newArray[0]);

    for(int i = 0; i<size ; i++){
        cout<<newArray[i]<<" ";
    }
}
