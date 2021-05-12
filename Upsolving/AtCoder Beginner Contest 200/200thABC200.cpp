#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k;
    cin >> n >> k;
    for (int i = 0; i < k; ++i)
    {
        if(n % 200 == 0) {
            n = n / 200;
        } else {
            n = (n * 1000) + 200;
        }
    }
    cout << n << "\n";
    return 0;
}