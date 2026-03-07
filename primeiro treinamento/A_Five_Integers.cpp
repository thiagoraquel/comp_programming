#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios::sync_with_stdio(0); cin.tie(0);

    // This block only runs on your computer
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    set<int> s;
    
    for (int i = 0; i < 5; i++) {
        int x; cin >> x;
        s.insert(x);
    }

    cout << s.size() << "\n";
    
    return 0;
}