#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O (One set is enough!)
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // This block only runs on your computer
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int n;
    if (!(cin >> n)) return 0; // Small safety check for empty files

    int max_h = -1;
    int best_bridge = -1;

    for (int i = 1; i <= n; i++) {
        int h;
        cin >> h;
        if (h > max_h) {
            max_h = h;
            best_bridge = i;
        }
    }

    cout << best_bridge << endl;
    return 0;
}