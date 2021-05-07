#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        int res = 0;
        for (long long pw = 1; pw <= n; pw = pw * 10 + 1) {
            for (int d = 1; d <= 9;  d++) {
                if (pw * d <= n) {
                    res++;
                }
            }
        }
        cout << res << "\n";
    }
    return 0;
}