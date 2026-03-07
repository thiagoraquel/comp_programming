#include <bits/stdc++.h>
using namespace std;

int main() {
    // Read N_balls and Q_Queries
    int N,Q; 
    cin >> N >> Q;

    // Read the value of each ball (there are N_balls balls)
    vector<int> A(N);
    for(auto &a : A) cin >> a;

    // Create a multiset of integers to store the values of the balls
    multiset<int> S(A.begin(),A.end());

    // Process each query
    while(Q--){
        // Read the number of balls to be removed
        int K; cin >> K;

        // Read the indices of the balls to be removed and store them in a vector
        vector<int> B(K);
        for(auto &b : B) cin >> b,b--;

        // Remove the values of the specified balls from the multiset
        for(auto b : B) S.erase(S.find(A.at(b)));
        
        // Print the value of the ball with the smallest value (which is the first element of the multiset)
        cout << *S.begin() << "\n";

        // Reinsert the values of the removed balls back into the multiset
        for(auto b : B) S.insert(A.at(b));
    }
}