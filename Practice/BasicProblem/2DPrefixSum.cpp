#include <bits/stdc++.h>
using namespace std;

#define row 4
#define col 5

void prefix_sum(int arr[row][col]){
    int psum[row][col], i = 0, j = 0;

    psum[0][0] = arr[0][0];

    for (i = 1; i < col; i++)
    {
        psum[0][i] = psum[0][i-1] + arr[0][i]; 
    }

    for (i = 1; i < row; i++)
    {
        psum[i][0] = psum[i-1][0] + arr[i][0]; 
    }

    for (i = 1; i < row; i++)
    {
        for (j = 1; j < col; j++)
        {
            psum[i][j] = psum[i-1][j] + psum[i][j-1] - psum[i-1][j-1] + arr[i][j];
        }
    }

    cout << "The Prefix Sum Array:\n";

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << psum[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";
}

int main() {
    int arr[row][col] = { { 1, 1, 1, 1, 1 }, 
                          { 1, 1, 1, 1, 1 }, 
                          { 1, 1, 1, 1, 1 }, 
                          { 1, 1, 1, 1, 1 } };

    prefix_sum(arr);

    return 0;
}