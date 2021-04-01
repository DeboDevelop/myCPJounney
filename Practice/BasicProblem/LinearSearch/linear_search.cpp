#include <bits/stdc++.h> 
using namespace std;

void search(int* arr, int size, int key) {
    for (int i = 0; i < size; ++i)
    {
        if (*(arr+i) == key)
        {
            cout << "Found at : " << i << "\n";
            return;
        }
    }
    cout << "Not Found\n";
}

int main()
{
    int size, key;
    cout << "Enter the Size of the Array: " << "\n";
    cin >> size;
    int arr[size];
    cout << "Enter the elements: " << "\n";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    cout << "Enter the number to be searched: " << "\n";
    cin >> key;
    search(arr, size, key);
    return 0;
}