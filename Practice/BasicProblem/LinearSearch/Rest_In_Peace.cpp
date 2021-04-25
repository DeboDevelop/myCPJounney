#include <bits/stdc++.h>
using namespace std;

void check_twenty_one(long long num) {
    int flag = 0, rem_1 = 0, rem_2 = 0;
    long long n = num;
    while(n != 0) {
        rem_1 = n%10;
        n = n/10;
        rem_2 = n%10;
        if(rem_1 == 1 && rem_2 == 2) {
            flag = 1;
            break;
        }
    }
    if(num%21 == 0 || flag == 1) {
        cout << "The streak is broken!\n";
    } else {
        cout << "The streak lives still in our heart!\n";
    }
}

int main() {
    int t; long long num;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> num;
        check_twenty_one(num);
    }
    return 0;
}