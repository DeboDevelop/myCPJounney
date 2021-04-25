#include <bits/stdc++.h>
using namespace std;

void maximum_sum(vector<long long>& arr, int size) {
    long long maxi = 0, maximum = INT_MIN, count = 0;
    for (int i = 0; i < size; ++i) {
        if(arr[i] >= 0) {
            maxi+= arr[i];
            count++;
        }
        if(arr[i] > maximum) {
            maximum = arr[i];
        }
    }
    if(count == 0) {
        cout << maximum << " 1";
        return;
    }
    cout << maxi << " " << count;
    return;
}

int main() {
    int size;
    cin >> size;
    vector <long long> arr(size);
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    maximum_sum(arr, size);
    return 0;
}