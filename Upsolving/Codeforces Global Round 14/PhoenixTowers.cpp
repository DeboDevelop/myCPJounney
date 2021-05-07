#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    for (int i = 0; i < t; ++i)
    {
        int n, m, x;
        cin>>n>>m>>x;
        cout<<"YES"<<"\n";
        int h[n];
        set<pair<int,int>>s;
        for (int i=1;i<=m;i++)
            s.insert({0,i});
        for (int i=0;i<n;i++){
            cin>>h[i];
            pair<int,int>p=*s.begin();
            s.erase(p);
            cout<<p.second<<' ';
            s.insert({p.first+h[i],p.second});
        }
        cout<<"\n";
    }
    return 0;
}