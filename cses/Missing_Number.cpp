#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
    long long int n;
    cin >> n;
    long long total_sum = n * (n + 1) / 2;
    long long current_sum = 0;
    for (int i = 0; i < n - 1; i++) {
        long long num;
        cin >> num;
        current_sum += num;
    }
    cout << total_sum - current_sum << "\n";
    return 0;
} 