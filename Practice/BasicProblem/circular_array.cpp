#include <bits/stdc++.h> 
using namespace std;

void circular(int* arr, int size, int index) {
    for (int i = index; i < (size + index); ++i)
    {
        cout << *(arr+(i%size)) << " ";
    }
    cout << "\n";
}

int main()
{
    int size, index;
    cout << "Enter the Size of the Array: " << "\n";
    cin >> size;
    int arr[size];
    cout << "Enter the elements: " << "\n";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    cout << "Enter index: " << "\n";
    cin >> index;
    circular(arr, size, index);
    return 0;
}