#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int N, M;
    cin >> N >> M;

    vector<int> C(M);

    for (int i = 0; i < M; i++) {
        cin >> C[i];
    }

    pair<int, int> P[N];

    for (int i = 0; i < N; i++) {
        cin >> P[i].first >> P[i].second;
    }

    int count = 0;

    /*for (int i = 0; i < N; i++) {
        if (P[i].second <= (C[P[i].first - 1])) {
            count += P[i].second;
            C[P[i].first - 1] -= P[i].second;
        }
    }*/

    for (int i = 0; i < N; i++) {
        if ((C[P[i].first - 1]) - P[i].second < 0) {
            count += C[P[i].first - 1];
            C[P[i].first - 1] = 0;
        } else {
            count += P[i].second;
            C[P[i].first - 1] -= P[i].second;
        }
    }

    cout << count << endl;


    return 0;
}