#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
 
const ll MOD = 1000000007LL;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int l, r;
    cin >> l >> r;
    
    vector<ll> dp(r + 1, 0);
    dp[1] = 1;
    
    for (int i = 1; i <= r; i++) {
        if (dp[i] == 0) continue;
        for (int j = i * 2; j <= r; j += i) {
            dp[j] = (dp[j] + dp[i]) % MOD;
        }
    }
    
    ll answer = 0;
    for (int i = l; i <= r; i++) {
        answer = (answer + dp[i]) % MOD;
    }
    cout << answer << "\n";
    return 0;
}