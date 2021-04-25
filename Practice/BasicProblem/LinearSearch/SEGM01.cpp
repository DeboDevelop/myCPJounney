#include <bits/stdc++.h>
using namespace std;

void check_segment(string str) {
    long long len = str.length(), flag = 0;
    long long start_pos = 0, end_pos = len;
    for (long long i = 0; i < len; ++i) {
        if(str[i] == '1') {
            start_pos = i;
            break;
        }
    }
    for (long long i = len; i >= 0; i--) {
        if(str[i] == '1') {
            end_pos = i;
            break;
        }
    }
    for (long long i = start_pos; i <= end_pos; ++i) {
        if(str[i] == '0') {
            flag = 1;
            break;
        }
    }
    if(flag == 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    int t;
    string str; 
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> str;
        //getline(cin, str);
        check_segment(str);
    }
    return 0;
}