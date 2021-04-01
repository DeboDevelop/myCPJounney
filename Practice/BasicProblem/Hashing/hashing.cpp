#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> count;
    string str;
    cout << "Enter the String: " << "\n";
    cin >> str;

    for(char c : str) {
        count[c]++;
    }
    for (int i = 65; i < 90; ++i)
    {
        cout << (char)i << " : " << count[i] << "\n";
    }
    cout << "\n";
    for (int i = 97; i < 122; ++i)
    {
        cout << (char)i << " : " << count[i] << "\n";
    }
    return 0;
}