#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
 
int main() {
    int N, Q;
    cin >> N >> Q;
 
    vector<ll> diff(N + 2, 0);
 
    for (int i = 0; i < Q; i++) {
        int l, r;
        ll v;
        cin >> l >> r >> v;
        l--;
        r--;
 
        diff[l] += v;
        diff[r + 1] -= v;
    }
 
    vector<ll> result(N);
    ll current = 0;
    for (int i = 0; i < N; i++) {
        current += diff[i];
        result[i] = current;
    }
 
    for (int i = 0; i < N; i++) {
        cout << result[i] << (i == N - 1 ? '\n' : ' ');
    }
 
    return 0;
}