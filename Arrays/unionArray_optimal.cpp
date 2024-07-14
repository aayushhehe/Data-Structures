#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int m = 6;
    int a[n] = {1, 2, 3, 4, 5};
    int b[m] = {1, 2, 3, 6, 7, 8};
    vector<int> vec;

    int i = 0;
    int j = 0;

    while (i < n && j < m) {
        if (a[i] == b[j]) {
            if (vec.empty() || vec.back() != a[i]) {
                vec.push_back(a[i]);
            }
            i++;
            j++;
        } else if (a[i] < b[j]) {
            if (vec.empty() || vec.back() != a[i]) {
                vec.push_back(a[i]);
            }
            i++;
        } else {
            if (vec.empty() || vec.back() != b[j]) {
                vec.push_back(b[j]);
            }
            j++;
        }
    }

    // Handle remaining elements in a
    while (i < n) {
        if (vec.empty() || vec.back() != a[i]) {
            vec.push_back(a[i]);
        }
        i++;
    }

    // Handle remaining elements in b
    while (j < m) {
        if (vec.empty() || vec.back() != b[j]) {
            vec.push_back(b[j]);
        }
        j++;
    }

    // Convert vector to static array
    int size = vec.size();
    int arr[size];
    for (int k = 0; k < size; ++k) {
        arr[k] = vec[k];
    }

    // Print the static array
    for (int k = 0; k < size; ++k) {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}
