#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long b[200]={0};
    cin >> n;
    
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
        b[ a[i] % 200 ]++;
    }
    long long res=0;

    for(int k = 0; k < 200; k++){
        res += (b[k] * (b[k] - 1)) / 2;
    }

    cout << res << "\n";
    return 0;
}