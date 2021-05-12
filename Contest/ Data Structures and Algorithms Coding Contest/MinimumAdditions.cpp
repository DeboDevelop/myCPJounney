#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    for (long long i = 0; i < t; ++i)
    {
        long long n, k;
        cin >> n >> k;
        long long arr[n];
        long long total = 0;
        for (long long i = 0; i < n; ++i)
        {
            cin >> arr[i];
            total += arr[i];
        }
        long long avg = floor(total/n);
        if(avg >= k) {
            cout << (avg-k) << "\n";
        } else {
            cout << "0" << "\n";
        }
    }
    return 0;
}