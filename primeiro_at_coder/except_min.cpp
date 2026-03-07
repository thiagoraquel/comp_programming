#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int N_balls, Q_queries;
    cin >> N_balls >> Q_queries;
    
    vector<int> bag_of_balls(N_balls);
    
    for (int i = 0; i < N_balls; i++) {
        cin >> bag_of_balls[i];
    }

    for (int i = 0; i < Q_queries; i++) {
        int K_balls_removed;
        cin >> K_balls_removed;

        //Copy original bag of balls to a temporary vector
        vector<int> temp_bag = bag_of_balls;

        for (int j = 0; j < K_balls_removed; j++) {
            int ball_to_remove;
            cin >> ball_to_remove;

            temp_bag[ball_to_remove - 1] = -1; // Mark the removed ball with -1
        }

        // Eliminate all -1 values and positions from temp_bag
        temp_bag.erase(remove(temp_bag.begin(), temp_bag.end(), -1), temp_bag.end());

        // Output the minimum value in the temp_bag
        if (!temp_bag.empty()) {
            int min_value = *min_element(temp_bag.begin(), temp_bag.end());
            cout << min_value << "\n";
        } else {
            cout << "All balls removed\n";
        }
    }

    return 0;
}