#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios::sync_with_stdio(0); cin.tie(0);

    // This block only runs on your computer
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    long long x;

    cin >> x;

    while (x != 1) {
        cout << x << " ";
        if (x % 2 == 0) {
            x /= 2;
        } else {
            x = 3 * x + 1;
        }
    }
    cout << 1;

    return 0;
}