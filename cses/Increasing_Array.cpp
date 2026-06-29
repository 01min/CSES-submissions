#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    long long moves = 0;
    long long prev_val; 
    cin >> prev_val;
    for (int i = 1; i < n; i++) {
        long long current_val;
        cin >> current_val;
        if (current_val < prev_val) {
            moves += (prev_val - current_val);
        } else {
            prev_val = current_val;
        }
    }
    cout << moves << "\n";
 
    return 0;
}