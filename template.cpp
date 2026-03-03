#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios::sync_with_stdio(0); cin.tie(0);

    // This block only runs on your computer
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    // Your logic here
    int n; cin >> n;
    int mx = -1, ans = 0;
    for(int i = 1; i <= n; i++) {
        int h; cin >> h;
        if(h > mx) { mx = h; ans = i; }
    }
    cout << ans << endl;

    return 0;
}