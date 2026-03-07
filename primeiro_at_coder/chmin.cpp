#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int main() {

    ios::sync_with_stdio(0); cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int N, X;
    
    if (!(cin >> N >> X)) return 0;

    vector<int> numbers(N);

    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
        if (numbers[i] < X) {
            X = numbers[i];
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}