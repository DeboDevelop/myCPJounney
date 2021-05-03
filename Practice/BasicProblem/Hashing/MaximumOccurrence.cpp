#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    vector<int> hash(127, 0);
    for (int i = 0; i < str.length(); ++i)
    {
        int ascii = (int)str[i];
        hash[ascii]++;
    }
    char maxi = 0; int count = -1;
    for(int i = 0; i < 127; i++) {
        if (hash[i] > count) {
            count = hash[i];
            maxi = (char)i;
        }
    }
    if(maxi >= 97 && maxi <= 122 && count == hash[((int)maxi - 32)]) {
        maxi = (char)((int)maxi - 32);
    }
    cout << maxi << " " << count << "\n";
    return 0;
}