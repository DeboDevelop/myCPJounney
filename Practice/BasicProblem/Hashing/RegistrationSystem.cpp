#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    map<string, int> mp;
    string str;
    for(int i = 0; i < t; i++) {
        cin >> str;
        if(mp.count(str) == 0) {
            mp[str] = 1;
            cout << "OK" << "\n";
        } else {
            cout << str << mp[str] << "\n";
            mp[str] += 1;
        }
    }
    return 0;
}