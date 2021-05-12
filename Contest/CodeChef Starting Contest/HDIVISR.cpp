#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    for (int i = 10; i > 0; i--) {
        if(n % i == 0) {
            cout << i << "\n";
            break;
        }
    }
    return 0;
}