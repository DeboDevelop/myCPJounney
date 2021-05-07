#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (char c = 'A'; c <= 'Z'; c++) {
        int first = INT_MAX;
        int last = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                first = min(first, i);
                last = max(last, i);
            }
        }
        for (int i = first; i <= last; i++) {
            if (s[i] != c) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        solve();
    }
}