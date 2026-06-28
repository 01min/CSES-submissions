#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
    string s;
    if (!(cin >> s)) return 0; 
 
    int max_len = 1;     
    int current_len = 1; 
    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            current_len++;
        } else {
            current_len = 1;
        }
        max_len = max(max_len, current_len);
    }
 
    cout << max_len << "\n";
 
    return 0;
}