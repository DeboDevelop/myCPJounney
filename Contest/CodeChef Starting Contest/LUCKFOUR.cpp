#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {
        long long num;
        cin>>num;
        int count = 0;
        while(num != 0)
        {
            long long rem = num % 10;
            if(rem == 4) {
                count++;
            }
            num = num / 10;
        }
        cout << count << "\n";
    }
    
    return 0;
}