#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin>>N;

    int numbers[N];
    for (int i = 0; i < N; ++i) {
        cin>>numbers[i];
    }

    cin>>Q;
    int queries[Q][2];
    for (int i = 0; i < Q; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin>>queries[i][j];
        }
    }

    int prefixSum[N];
    prefixSum[0] = numbers[0];

    for (int i = 1; i < N; i++) {
        prefixSum[i] = prefixSum[i - 1] + numbers[i];
    }

    for (int i = 0; i < Q; ++i) {
        if (queries[i][0] == 0) {
            cout<<prefixSum[queries[i][1]]<<"\n";
        }
        else {
            cout<<(prefixSum[queries[i][1]]-prefixSum[queries[i][0]-1])<<"\n";
        }
    }
    return 0;
}