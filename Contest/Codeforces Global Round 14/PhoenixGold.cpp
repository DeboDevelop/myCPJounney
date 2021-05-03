#include <bits/stdc++.h>
using namespace std;

void calculate(long long nums[], long long n, long long x) {
    long long sum = 0, i = 0, flag = 0;
    while(i < n) {
        if(sum + nums[i] == x) {
            if(i + 1 < n) {
                swap(nums[i], nums[i+1]);
            } else {
                flag = 1;
                break;
            }
        } else {
            sum += nums[i];
            i++;
        }
    }
    if(flag == 1) {
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";
        for (int i = 0; i < n; ++i)
        {
            cout << nums[i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, n, x;
    cin >> t;
    for (long long i = 0; i < t; ++i)
    {
        cin >> n >> x;
        long long nums[n];
        for (long long i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }
        calculate(nums, n, x);
    }
    return 0;
}