#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n <= 100)
        cout << "1\n";
    else if (n % 100 == 0)
        cout << n/ 100 << "\n";
    else
        cout << (n/ 100) + 1 << "\n";
    return 0;
}