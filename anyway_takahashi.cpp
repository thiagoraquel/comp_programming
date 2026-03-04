#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios::sync_with_stdio(0); cin.tie(0);

    // This block only runs on your computer
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int sum = ((a + b) * (c - d));

    cout << sum << endl;
    cout << "Takahashi" << endl;
    return 0;
}