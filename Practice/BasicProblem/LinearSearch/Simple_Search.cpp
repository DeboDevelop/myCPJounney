#include <bits/stdc++.h> 
using namespace std;

void linear_search(vector<int>& arr, int key) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == key) {
            cout << i;
            break;
        }
    }
    return;
}

int main() {
    int size, key;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    cin >> key;
    linear_search(arr, key);
    return 0;
}