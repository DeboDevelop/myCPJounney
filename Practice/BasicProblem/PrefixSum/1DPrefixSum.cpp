#include <bits/stdc++.h>
using namespace std;

void prefix_sum(int arr[], int size){
    int psum[size], i = 0;

    psum[0] = arr[0];

    for (i = 1; i < size; i++)
    {
        psum[i] = psum[i-1] + arr[i]; 
    }

    cout << "The Prefix Sum Array:\n";

    for (i = 0; i < size; i++)
    {
        cout << psum[i] << ", ";
    }

    cout << "\n";
}

int main() {
    int i=0, size;

    cout << "Enter the Size of the array: " << "\n";
    cin >> size;

    int arr[size];

    for (i = 0; i < size; ++i)
    {
        cout<<"Enter the element ["<<i<<"] of the array: "<<"\n";
        cin>>arr[i];
    }

    prefix_sum(arr, size);

    return 0;
}