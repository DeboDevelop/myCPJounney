#include <bits/stdc++.h>
using namespace std;

bool isSquare(int x){
  int y=sqrt(x);
  return y*y==x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    for (long long i = 0; i < t; ++i)
    {
        long long n;
        cin >> n;
        if (n%2==0 && isSquare(n/2))
            cout<<"YES"<<endl;
        else if (n%4==0 && isSquare(n/4))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}