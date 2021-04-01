#include <iostream>
using namespace std;

void prefixSum2D(int *a, int r, int c)
{
    int psa[r][c];
    psa[0][0] = *a;

    for (int i = 1; i < c; i++)
        psa[0][i] = psa[0][i - 1] + *(a+i);

    for (int i = 1; i < r; i++)
        psa[i][0] = psa[i - 1][0] + *(a+i*c);

    for (int i = 1; i < r; i++) {
        for (int j = 1; j < c; j++) {
            psa[i][j] = psa[i - 1][j] + psa[i][j - 1] - psa[i - 1][j - 1] + *(a +( i * c ) + j);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++){
            cout << psa[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int i, j, r, c;
    cout<<"Enter no. of col: ";
    cin>>c;

    cout<<"\nEnter no. of row: ";
    cin>>r;

    int arr[r][c];
    cout<<"\nEnter the elements of the array: "<<"\n";

    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            cout<<"Enter the element ["<<i<<"]["<<j<<"] of the array: "<<"\n";
            cin>>arr[i][j];
        }
    }

    prefixSum2D((int *)arr, r, c);
    return 0;
}